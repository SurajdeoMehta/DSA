https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b;
float c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%f",&c);
scanf("%f",&d);
int sum=a+b;
int sub=a-b;
float s1=c+d;
float s2=c-d;
printf("%d ",sum);
printf("%d \n",sub);
printf("%.1f ",s1);
printf("%.1f",s2);
    return 0;
}

