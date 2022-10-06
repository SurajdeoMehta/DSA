https://www.hackerrank.com/challenges/diagonal-difference/submissions/code/294478245

#include<stdio.h>
int main()
{
int n,i,diff=0,s1=0,s2=0;
scanf("%d",&n);
int a[n][n];
for(int i=0; i < n; i++)
{
for(int j = 0; j < n; j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
 {
s1=s1+a[i][i];
s2=s2+a[i][n-1-i];
}
diff=abs(s1-s2);
printf("%d",diff);
return 0;
}
