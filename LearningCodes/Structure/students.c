#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    char section[10];
};

int main() {
    struct Student s1 = {"Akshit", 111111, "CSE"};
    struct Student s2 = {"Homie", 222222, "CSE"};
    struct Student s3;


    printf("Enter name of Student 3: ");
    scanf("%s", s3.name);  

    printf("Enter roll number of Student 3: ");
    scanf("%d", &s3.roll_no);

    printf("Enter section of Student 3: ");
    scanf("%s", s3.section);  

    printf("\nStudent 1:\nName: %s\nRoll No: %d\nSection: %s\n", s1.name, s1.roll_no, s1.section);
    printf("\nStudent 2:\nName: %s\nRoll No: %d\nSection: %s\n", s2.name, s2.roll_no, s2.section);
    printf("\nStudent 3:\nName: %s\nRoll No: %d\nSection: %s\n", s3.name, s3.roll_no, s3.section);

    return 0;
}
