#include<stdio.h>

void main(){

    int k=385, A=100;        //Thermal Conductivity of Copper in W/mk. A represents Area of 100 meter square.
    float Q,T1,T2,x1,x2;    //Q is amount of  heat transfer , T for Temperature and x for co-ordinates of a point on X-axis. Both can be float.
                           //Q is in watt, T can be in kelvin or celsius and x in meter

    printf("Please input X-axis Co-ordinate of point 1: ");
    scanf("%f",&x1);            //Taking input of X-axis Co-ordinate of one point
    printf("Please input Temperature of point 1: ");
    scanf("%f",&T1);            //Taking input of Temperature of one point


    printf("Please input X-axis Co-ordinate of point 2: ");
    scanf("%f",&x2);            //Taking input of X-axis Co-ordinate of another point
    printf("Please input Temperature of point 2: ");
    scanf("%f",&T2);            //Taking input of Temperature of another point

    Q = (k*A*(T1-T2))/(x1-x2);

    printf("Heat transfer between given two points is: %f",Q);


}

