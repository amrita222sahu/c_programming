#include<stdio.h>
int main(){

    float hours;
    float minutes;
    float totalminutes;

    printf("enter of hours: ");
    scanf("%f",&hours);

    printf("enter of minutes: ");
    scanf("%f",&minutes);

    totalminutes=(hours*60)+minutes;

    printf("total minutes: %f/n",totalminutes);

}
