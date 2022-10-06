https://www.hackerrank.com/challenges/plus-minus/submissions/code/294476168


#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
float p=0,q=0,r=0;
float res1,res2,res3;
for(i=0;i<n;i++)
 {
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
 {
if(a[i]>0)
p++;
else if(a[i]<0)
q++;
else
r++;
}
res1=p/n;
res2=q/n;
res3=r/n;
 printf("%f\n%f\n%f",res1,res2,res3);
return 0;
}

