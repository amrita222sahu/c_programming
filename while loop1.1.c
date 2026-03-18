#include<stdio.h>
int main(){
int n,r=0,t;
   printf("enter the number :");
   scanf("%d",&n);

   while(n!=0){
        n=n/10;
        r=r*10+t;
        t=n%10;
   }
     printf("%d",n);
     if(n==10){
            printf("both are same");
     }
}




