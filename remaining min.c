#include<stdio.h>
    int main(){
         int h;
         int m;
         int remainingm;

         printf("enter the number of h");
         scanf("%d",&h);

         printf("enter the number of m");
         scanf("%d",&m);

         remainingm=(m*60)+h;

         printf("remainingm %d/n",remainingm);

    }
