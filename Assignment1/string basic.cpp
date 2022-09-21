https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true


#include <iostream>
#include <string>
using namespace std;
 
int main() {
  string a;
  string b;
  cin>>a;
  cin>>b;
 
  cout<<a.size()<<" "<<b.size()<<endl;
  cout<<a+b<<endl;
  char x;
  x=a[0];
  a[0]=b[0];
  b[0]=x;
  cout<<a<<" "<<b;
 
    return 0;
}
