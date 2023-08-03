/*
Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. 
If the array is sorted then return True, Else return False.
*/

// Brute Force Approach:-


/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                cout<<"false"<<endl;
            }
        }
    }
  cout<<"true"<<endl;
  return 0;
}

--> Time Complexity - O(N^2)
*/

// OPTIMAL APPROACH:-

#include<iostream>
using namespace std;

int isSorted(int arr[],int n){
      for(int i=1;i<n;i++){
      if(arr[i+1]<arr[i]){
        return false;
      }
  }
  return true;
}
int main()
{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int ans=isSorted(arr,n);
  cout<<ans<<endl;


  return 0;
}

// --> Time Complexity - O(n)