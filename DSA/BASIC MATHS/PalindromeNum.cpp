#include<iostream>
using namespace std;
int reverseNumber(int n){
    int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    return reverse;
}
int main()
{
  int n=121;
  
  int x=n;
  int z=reverseNumber(n);
  if(x==z){
    cout<<"palindrome number"<<endl;
  }else{
    cout<<"Not palindrome number"<<endl;
  }

  return 0;
}