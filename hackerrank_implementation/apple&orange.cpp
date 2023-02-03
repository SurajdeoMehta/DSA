https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main()
{
    int a,b,m,n,d,s,t;
    int A=0,K=0;
    cin>>a>>b>>s>>t>>m>>n;
    int apple[m],orange[n];
    for (int i=0;i<m;i++)
    cin>>apple[i];
     for (int j=0;j<n;j++)
     cin>>orange[j];
      for (int i=0;i<n;i++)
      d=b+apple[i];
      {
      if(d>=s &&d<=t)
          A++;
      }
       for (int j=0;j<n;j++)
       d=b+orange[j];
       {
       if(d>=s&&d<=t)
           K++;
       }
       cout<<A<<endl;
       cout<<K<<endl;
       return 0;
}
       

