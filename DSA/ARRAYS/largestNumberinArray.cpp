/* In this question we have to find the Largest number in an Array*/

#include <bits/stdc++.h>
using namespace std; 
int largestElement(int arr[], int size) {
    // Write your code here.
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;
}

int main(){

    // take input size of the array from the user
    
    int size;
    cin>>size;
    
    // take input element from the user

    int arr1[size];
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    // print the array 
    
    for(int i=0;i<size;i++){
        cout<<arr1[i];
    }
    cout<<endl;

    // function call to print the largest number from the array

    cout<<largestElement(arr1,size);
    

    
}
