#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here
	if(a>b)
	return "greater";
	if(a==b)
	return "equal";
	else
	return "smaller";

}
int main()
{
    int a,b;
    cin>>a>>b;
    string ans=compareIfElse(a,b);
    cout<<ans<<endl;

  
  return 0;
}