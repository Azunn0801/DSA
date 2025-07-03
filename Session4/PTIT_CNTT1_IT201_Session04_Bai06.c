//
// Created by Azunn on 7/3/2025.
//
#include <stdio.h>
#include <stdbool.h>
#define MAX_STUDENTS 5

typedef struct Student {
    int id;
    char name[100];
    int age;
}   Student;

int main() {
    int findID;
    Student student[MAX_STUDENTS];
    bool found = false;

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf(("Enter student ID: "));
        scanf("%d", &student[i].id);
        printf("\n");
        printf(("Enter student name: "));
        scanf("%s", student[i].name);
        printf("\n");
        printf(("Enter student age: "));
        scanf("%d", &student[i].age);
        printf("\n");
    }

    scanf("%d", &findID);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (findID == student[i].id) {
            printf("id: %d, name: %s, age: %d", student[i].id, student[i].name, student[i].age);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Sinh vien khong ton tai!\n");
    }

    return 0;
}