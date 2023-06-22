#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    char name[50];
    int age;
};

struct Member* delete_member(struct Member* members, int num_members) {
    if (num_members <= 0) {
        printf("No members to delete.\n");
        return members;
    }

    int i;
    for (i = 1; i < num_members; i++) {
        members[i - 1] = members[i];
    }

    members = (struct Member*)realloc(members, (num_members - 1) * sizeof(struct Member));

    return members;
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

 
    members = delete_member(members, num_members);
    num_members--;

    
    int i;
    for (i = 0; i < num_members; i++) {
        printf("Member %d:\n", i + 1);
        printf("Name: %s\n", members[i].name);
        printf("Age: %d\n", members[i].age);
        printf("-----------------\n");
    }

    free(members);
    return 0;
}
