#include <stdio.h>
int main (){

      float meters;
      float feet;
      float inches;
      float cm;

      printf("inter distance in km");
      scanf("%f", &cm);

      meters = cm* 1000;
      feet = cm* 3.28084;
      inches = cm* 12;
       cm = cm * 100000;

      printf("meters %2f\n", meters);
      printf("feet %2f\n", feet);
      printf("inches %2f\n",inches);
      printf("cm %2f\n",cm);

}
