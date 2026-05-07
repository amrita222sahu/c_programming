#include <stdio.h>
#include <stdlib.h>
int main(){

   int n, i, *a, *b, *c;

   printf("enter the array :");
   scanf("%d",&n);


   a=(int*) malloc (n*sizeof(int));
   b=(int*) malloc (n*sizeof(int));
   c=(int*) malloc (n*sizeof(int));

   printf("enter the first array:");
   for(i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }

   printf("enter the second array:");
   for(i = 0; i < n; i++){
    scanf("%d",&b[i]);
   }


  for (i = 0; i < n; i++){
    *(c+i) = *(a+i) + *(b+i);
    }

     printf("result =");
  for (i = 0; i < n; i++){
    printf("%d", *(c+i));
  }
  //memory free
  free(a);
  free(b);
  free(c);

  return 0;
}








