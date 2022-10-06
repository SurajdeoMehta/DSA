https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/293385708


//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long a[n];
    long sum;
    for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
  sum=sum+a[i];
  cout<<sum;
  return 0;
}
