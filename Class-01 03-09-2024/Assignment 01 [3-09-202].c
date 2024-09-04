#include<stdio.h>
#define PI 3.1416

int main(){

    float radius,perimeter;                                 //declaring some variables
    printf("Please Give Radious of The Circle: ");          //printing information
    scanf("%f",&radius);                                    //get radius from users
    perimeter = 2*PI*radius;                                //calculating
    printf("Perimeter of The Circle is: %f\n",perimeter);   //printing result
    return 0;
}
