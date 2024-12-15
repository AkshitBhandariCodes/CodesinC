#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    char section[10];
};

void main() {
    struct Student std[5];


    for (int i = 0; i < 5; i++) {
        printf("Enter data for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %s", std[i].name); 

        printf("Enter roll number: ");
        scanf("%d", &std[i].roll_no);

        printf("Enter section: ");
        scanf(" %s", std[i].section); 
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (int j = 0; j < 5; j++) {
        printf("Student %d:\n", j + 1);
        printf("Name: %s\n", std[j].name);
        printf("Roll No: %d\n", std[j].roll_no);
        printf("Section: %s\n\n", std[j].section);
    }
}
