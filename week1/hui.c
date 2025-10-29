#include<stdio.h>
#include<cs50.h>
float hui(int a, int b);
int main(void)
{


       float ans= hui(4,5);
        printf("%f\n",ans);

}

float hui(int a, int b)
{
   int sum=0;
   sum=a+b;
   return sum;
}


