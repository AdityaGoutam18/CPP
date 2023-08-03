#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int ans=0;
    while(n>0){
        int digit=n%10;
        ans =ans+(digit*digit*digit);
        n/=10;
    }
    return ans==n;
}
int main()
{
    int n=153;
    cout<<isArmstrong(n)<<endl;
  
  return 0;
}