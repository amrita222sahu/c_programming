#include<stdio.h>
int main(){
   int a [10];
   int i;

   printf("enter 10 value");
   for (i=0; i<10; i=i+1){
    scanf("%d",&a[i]);
   }
   for(i=0; i<10; i=i+1){
    printf("%d",a[i]);
   }

}
