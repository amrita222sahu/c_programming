#include<stdio.h>
int main(){

      int totalminutes;
      int minutes;
      int hours;

      printf("enter total minutes: ");
      scanf("%d", &totalminutes);

      hours=totalminutes /60;
      minutes=totalminutes %60;

      printf("output: %d hours, %d minutes\n", hours,minutes);



}
