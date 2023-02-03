https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max,min;
    int a[n],hs=0,ls=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        
        if(a[i]>max){
        hs=hs+1;
        max=a[i];
        }
    }
    cout<<hs<<" ";
    for(int i=1;i<n;i++)
    {
        if(a[i]<min){
        ls=ls+1;
        min=a[i];
        }
    }
    cout<<ls;
    return 0;
}
