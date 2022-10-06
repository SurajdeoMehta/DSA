https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true


#include<stdio.h>
int main()
{
 long int arr[5],i,sum,min=0,max=0;
for(i=0;i<5;i++)
{
scanf("%ld",&arr[i]);
}
min=arr[0]+arr[1]+arr[2]+arr[3];
max=arr[1]+arr[2]+arr[3]+arr[4];
for(i=0;i<5;i++)
{
sum=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])-arr[i];
if(sum>max)
{
max=sum;
}
if(min>sum)
{
min=sum;
}

}
printf("%ld %ld",min,max);
return 0;
}

