/*
Given an array, find the second smallest and second largest element in the array. 
Print ‘-1’ in the event that either of them doesn’t exist.
*/

#include<bits/stdc++.h>
using namespace std;

int Secondlargest(int arr[], int n){
    int largest = arr[0];
    int Slargest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            Slargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > Slargest){
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int Secondsmallest(int arr[], int n){
    int smallest = arr[0];
    int Ssmallest = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            Ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] != smallest && arr[i] < Ssmallest){
            Ssmallest = arr[i];
        }
    }
    return Ssmallest;
}

pair<int, int> getSecondOrderElements(int n, int arr[]){
    int slargest = Secondlargest(arr, n);
    int ssmallest = Secondsmallest(arr, n);
    return {slargest, ssmallest};
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    pair<int, int> ans = getSecondOrderElements(n, arr);
    cout << "Second Largest: " << ans.first << endl;
    cout << "Second Smallest: " << ans.second << endl;

    return 0;
}
