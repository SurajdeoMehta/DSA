https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true


#include <stdio.h>
int main() {
	
    int n,rem,sum=0;
    scanf("%d", &n);
    while(n>0)
  {
    rem=n%10;
    n=n/10;
    sum=sum+rem;
  }
    printf("%d",sum);
    return 0;
}
