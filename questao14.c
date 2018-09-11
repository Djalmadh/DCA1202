#include <stdio.h>
#include <stdlib.h>

void ordem(int n, int *x)
{
  int i,j,temp;
  //compara tamanho

  for(i=0; i<n; i++)
  {
     for(j=i+1; j<n;j++)
     {
        if(x[i]>x[j])
        {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
     }

  }

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

ordem(n,x);

for(i=0; i<n; i++)
 {
   printf("%d \n ", x[i]);// imprime o vetor
 }
}
