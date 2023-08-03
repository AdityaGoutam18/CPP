#include<iostream>
using namespace std;
int main()
{
  int n,b;
  cin>>n;
  while(n>0){
    b=n%2;
    cout<<b;
    n/=2; // division assignment operator
  }
  return 0;
}