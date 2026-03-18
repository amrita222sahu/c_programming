#include<stdio.h>
int main(){
    int a[5],i;
    int *p;
    p = a;

        printf("enter the element of array:\n");
        for(i=0; i<5; i=i+1){
            scanf("%d",p+i);
        }

        for(i=0; i<5; i=i+1){
            printf("%d",*p+i);
        }


}
