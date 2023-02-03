https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]<40)
        {
            int ans=(a[i]/5)*5+5;
            if((ans-a[i])<3 && ans==40)
            cout<<ans<<endl;
            else
             cout<<a[i]<<endl;
        }
        else 
        {
        int rd1=(a[i]/5)*5+5;
        if((rd1-a[i])<3)
        cout<<rd1<<endl;
        else 
         cout<<a[i]<<endl;
        }
    }
    return 0;
         
}
