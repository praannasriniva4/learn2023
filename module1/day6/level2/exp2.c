#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float calculate_distance(struct Point p1, struct Point p2) {
    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    struct Point point1, point2;

    printf("Enter the coordinates of Point 1:\n");
    printf("X: ");
    scanf("%f", &point1.x);
    printf("Y: ");
    scanf("%f", &point1.y);

    printf("Enter the coordinates of Point 2:\n");
    printf("X: ");
    scanf("%f", &point2.x);
    printf("Y: ");
    scanf("%f", &point2.y);

    float distance = calculate_distance(point1, point2);

    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}
