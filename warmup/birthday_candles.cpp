https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
       // count=count+1;
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        //max=a[i];
        count=count+1;
    }
    cout<<count;
   // cout<<max;
    return 0;
}
