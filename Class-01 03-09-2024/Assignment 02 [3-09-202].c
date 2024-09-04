#include<stdio.h>

void main(){

    float number1, number2, number3, number4,avg;  //declation of varibles
    printf("Please input Number 1: ");
    scanf("%f", &number1);                          //taking user input

    printf("Please input Number 2: ");
    scanf("%f", &number2);                          //taking user input

    printf("Please input Number 3: ");
    scanf("%f", &number3);                          //taking user input

    printf("Please input Number4: ");
    scanf("%f", &number4);                          //taking user input

    avg =(number1+number2+number3+number4)/4;       //calculating
    printf("\nThe AVG of Your Given 4 Numbers is: %f\n\n",avg);


}
