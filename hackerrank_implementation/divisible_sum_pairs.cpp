https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}
