https://www.hackerrank.com/challenges/simple-array-sum/submissions/code/293380708


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
  sum=sum+a[i];
  cout<<sum;
  return 0;
}
