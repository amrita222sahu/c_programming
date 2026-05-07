#include <stdio.h>

int main(){
   int n, i, a[n], b[n], c[n];


   printf("enter size of array:");
   scanf("%d",&n);

   printf("enter the first array:");

   for (i = 0; i < n; i = i + 1){
    scanf("%d",&a[i]);
   }

   printf("enter second array:");

   for (i = 0; i < n; i = i + 1){
    scanf("%d",&b[i]);
   }

    for (i = 0; i < n; i = i + 1){
        c[i] = a[i] + b[i];
    }

  printf("result =");
  for (i = 0; i < n; i = i + 1){
    printf("%d",&c[i]);
  }
  return 0;
}

