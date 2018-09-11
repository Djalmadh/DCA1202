#include <stdio.h>
#include <stdlib.h>


void somav(int n, int *a, int *b, int*c)
{
    int i;
    for (i=0; i<n; i++)
    {
        c[i]=a[i]+b[i];

    }
}

int main(int argc, char *argv[])
{
int n,i;
int *x,*y,*z;
scanf("%d",&n);

x=(int*)malloc(n*sizeof(int));// aloca o vetor
y=(int*)malloc(n*sizeof(int));// aloca o vetor
z=(int*)malloc(n*sizeof(int));// aloca o vetor
for(i=0; i<n; i++)
 {
    scanf("%d",&x[i]);
 }
for(i=0; i<n; i++)
 {
    scanf("%d",&y[i]);
 }
somav(n,x,y,z);

for(i=0; i<n; i++)
 {
   printf(" %d \n ",z[i] );// imprime o vetor
 }
}
