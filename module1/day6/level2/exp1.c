#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SensorInfo {
    char sensor_id[10];
    float temperature;
    int humidity;
    int light_intensity;
};

struct SensorInfo parse_data(const char* data) {
    struct SensorInfo sensor_info;

    char* token = strtok(data, "-");
    sscanf(token + 1, "%s", sensor_info.sensor_id);

    token = strtok(NULL, "-");
    sscanf(token + 2, "%f", &sensor_info.temperature);

    token = strtok(NULL, "-");
    sscanf(token + 2, "%d", &sensor_info.humidity);

    token = strtok(NULL, "-");
    sscanf(token + 2, "%d", &sensor_info.light_intensity);

    return sensor_info;
}

int main() {
    const char* data = "S1-T:36.5-H:100-L:50";
    struct SensorInfo sensor_info = parse_data(data);

    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor_info.sensor_id);
    printf("Temperature: %.1f C\n", sensor_info.temperature);
    printf("Humidity: %d\n", sensor_info.humidity);
    printf("Light Intensity: %d%%\n", sensor_info.light_intensity);

    return 0;
}
