// BRUTE FORCE 

/*
#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  cin>>num1>>num2;
  int ans;

  for(int i=1;i<=min(num1,num2);i++){
    if(num1%i==0 && num2%i==0){
        ans=i;
    }

   
    
  }
   cout<<ans;
  
  return 0;
}

*/

// OPTIMAL APPROACH

#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,b);  //Recursive call

}

int main()
{
  int a,b;
  cin>>a>>b;

  cout<<gcd(a,b)<<endl;


  return 0;
}