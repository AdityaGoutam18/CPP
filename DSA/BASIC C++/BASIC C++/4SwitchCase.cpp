#include<iostream>
#include<vector>
// #define M_PI 3.14;
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {

    double area = 0.0;

    // Using switch-case to figure out whose area we want to find

    switch (ch) {

        case 1: // Circle
            area = 3.14 * (a[0] * a[0]);
            break;

        case 2: // Rectangle
            area = a[0] * a[1];

    }

    // Returning the calculated area
    return area;
}
int main()
{

    int ch;
    cout<<"enter character"<<endl;
    cin>>ch;
    
    vector<double> a;
    if(ch==1){
        for(int i=0;i<1;i++){
        cout<<"enter array elements"<<endl;
        cin>>a[i];
       }

    }else{
        for(int i=0;i<2;i++){
        cout<<"enter array elements"<<endl;
        cin>>a[i];

    }
    }
    

    double ans=areaSwitchCase(ch,a);
    cout<<ans<<endl;

  
  return 0;
}