#include<stdio.h>

void main(){

    char Name[80],sub1[30],sub2[30];   //declaring of name and subject variable
    float CGPA;         //declaring of CGPA

    fgets(Name,80,stdin);  //taking Name as input
    scanf("%f",&CGPA);  //taking CGPA as input
    scanf("%s",&sub1);  //taking Subject as input
    scanf("%s",&sub2);  //taking subject as input
    for(int x=0;x<80;x++){          //using for loop to get rid of new line character, gets from fgets function.
        if(Name[x] == '\n'){
            Name[x] = '\0';
            break;
        }
    };
    if(CGPA > 3.2) {                //applying condition for CGPA to subject
        printf("\n%s is found Economics according to CGPA.\n",Name);
    } else if(CGPA < 3.2) {
        printf("\n%s\b\b\b is found English according to CGPA.\n",Name);
    };

}
