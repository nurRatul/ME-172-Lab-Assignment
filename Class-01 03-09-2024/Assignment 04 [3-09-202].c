//Assignment 04

#include<stdio.h>

void main(){

    float gpa1,gpa2,gpa3,gpa4,gpa5,gpa6,gpa7,gpa8,cgpa;   //declaring GPA variable of 8 semesters

    printf("Please Input your GPA of Semester 1 :");
    scanf("%f",&gpa1);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 2 :");
    scanf("%f",&gpa2);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 3 :");
    scanf("%f",&gpa3);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 4 :");
    scanf("%f",&gpa4);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 5 :");
    scanf("%f",&gpa5);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 6 :");
    scanf("%f",&gpa6);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 7 :");
    scanf("%f",&gpa7);           //taking input of GPA of one semester

    printf("Please Input your GPA of Semester 8 :");
    scanf("%f",&gpa8);           //taking input of GPA of one semester

    cgpa= (gpa1+gpa2+gpa3+gpa4+gpa5+gpa6+gpa7+gpa8)/8;

    printf("Your CGPA is: %4.2f",cgpa);
}
