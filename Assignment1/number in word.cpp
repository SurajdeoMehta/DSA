https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i,n;
    cin>>i>>n;
    for(int num=i; num<=n; num++){
    if(num==1){
        cout<<"one"<<endl;
    }
    else if (num==2){
        cout<<"two"<<endl;
    }
    else if (num==3){
        cout<<"three"<<endl;
    }
    else if (num==4){
        cout<<"four"<<endl;
    }
    else if (num==5){
        cout<<"five"<<endl;
    }
    else if (num==6){
        cout<<"six"<<endl;
    }
    else if (num==7){
        cout<<"seven"<<endl;
    }
    else if (num==8){
        cout<<"eight"<<endl;
    }
    else if (num==9){
        cout<<"nine"<<endl;
    }
    else if(num>9){
        if(num%2==0)
        cout<<"even"<<endl;
        else{
            cout<<"odd"<<endl;
        }
    }
    }
    return 0;
}
