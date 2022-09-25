https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true


#include <stdio.h>
int max(int a,int b,int c,int d)
{
    int greatest;
    if(a>b && a>d && a>c)
    greatest=a;
    else if (b>a && b>c && b>d) 
    greatest=b;
    else if (c>a && c>b && c>d)
    greatest=c;
    else 
greatest=d;
    return greatest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int greatest = max(a, b, c, d);
    printf("%d", greatest);
    
    return 0;
}

