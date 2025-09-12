#include<stdio.h>

    int main(){
        float basic;
        float da;
        float hra;
        float gross;

        printf("enter basic salary");
        scanf("%f",&basic);

        da=0.40*basic;

        hra=0.20*basic;

        gross=basic+da+hra;

        printf("gross salary %f",gross);


    }
