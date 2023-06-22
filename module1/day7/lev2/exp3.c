#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    char name[50];
    int age;
};

void swap_members(struct Member* members, int index1, int index2) {
    struct Member temp = members[index1];
    members[index1] = members[index2];
    members[index2] = temp;
}

int main() {
    int num_members = 3;


    struct Member* members = (struct Member*)malloc(num_members * sizeof(struct Member));

   
    strcpy(members[0].name, "John");
    members[0].age = 25;
    strcpy(members[1].name, "Alice");
    members[1].age = 30;
    strcpy(members[2].name, "Bob");
    members[2].age = 28;

   
    int index1, index2;
    printf("Enter the indexes to swap (0 to %d): ", num_members - 1);
    scanf("%d %d", &index1, &index2);

    
    if (index1 >= 0 && index1 < num_members && index2 >= 0 && index2 < num_members) {
        // Swap the members
        swap_members(members, index1, index2);

        // Print the updated array of structures
        int i;
        for (i = 0; i < num_members; i++) {
            printf("Member %d:\n", i + 1);
            printf("Name: %s\n", members[i].name);
            printf("Age: %d\n", members[i].age);
            printf("-----------------\n");
        }
    } else {
        printf("Invalid indexes.\n");
    }

    free(members);
    return 0;
}
