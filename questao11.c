#include <stdio.h>

int main()
{
      char *x;
      float *y;
      double *z;
      int n=4, i, *p;

//char

x= 4092;
printf("char=   ");
for( i=0 ; i<n; i++)
{

      printf("%d ", &x[i]);

}
printf("\n");

//float

x=0;
y=4092;
printf("float=  ");

for( i=0 ; i<n; i++)
{

      printf("%d ", &y[i]);

}
printf("\n");

//double

y=0;
z=4092;
printf("double= ");

for( i=0 ; i<n; i++)
{

      printf("%d ", &z[i]);

}
printf("\n");

// int

z=0;
p=4092;
printf("int=    ");

for( i=0 ; i<n; i++)
{

      printf("%d ", &p[i]);

}
printf("\n");

    return 0;
}

