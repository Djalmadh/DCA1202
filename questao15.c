#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
int n, i;
int *x;
scanf("%d",&n);//recebe n

x=(int*)malloc(n*sizeof(int));// aloca o vetor

for(i=0; i<n; i++)
 {
   scanf("%d, ", &x[i]);//recebe os valores do vetor
 }

qsort(x, n, sizeof(int), cmpfunc);// ordena o vetor
printf("\n");
for(i=0; i<n; i++)
 {
   printf("%d \n ", x[i]);// imprime o vetor
 }
}
