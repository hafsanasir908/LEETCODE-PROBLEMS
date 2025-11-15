#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[3];
    float average;
};

int main() {
    struct Student s[5];
    
    float highestAvg = 0;
    int topStudentIndex = 0;

    // Input for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks for 3 subjects:\n");
        s[i].average = 0;  // initialize average
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].average += s[i].marks[j];
        }

        s[i].average /= 3.0; //average

        if (s[i].average > highestAvg) {
            highestAvg = s[i].average;
            topStudentIndex = i;
        }

        printf("\n");
    }
    // Display student details with average
    printf("------ Student Details & Averages ------\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Average Marks: %.2f\n", s[i].average);
        printf("----------------------------------------\n");
    }

    //  Student with highest average
    printf("\n*** Student with Highest Average ***\n");
    printf("Name: %s\n", s[topStudentIndex].name);
    printf("Roll No: %d\n", s[topStudentIndex].roll);
    printf("Highest Average Marks: %.2f\n", highestAvg);

    return 0;
}

