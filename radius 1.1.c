#include<stdio.h>
int main(){

      float radius,perimeter,area;

      prntf("enter the radius of the circle");
      scanf("%f",&radius);

      perimeter=2*radius;
      area=radius*radius;

      printf("perimeter (circumference)= %.2f\n",perimeter);
      printf("area= %.2f\n",area);


}
