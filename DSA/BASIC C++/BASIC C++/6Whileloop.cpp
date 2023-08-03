#include<iostream>
using namespace std;

int main(){
    int n,z;
    cin>>n;

    int even=0;
    int odd=0;

    while(n>0){
        
        z=n%10;
        if(z%2==0){
            even=even+z;
        }else{
            odd=odd+z;
        }

        n=n/10;
    }
    cout<<even<<" "<<odd<<endl;

    
}