/* Given a integer N, Write a program to count
   the number of digits in N.
*/

// SOLUTION 1  
/*
#include<iostream>
using namespace std;
int count_digits(int n){
    int x=n;
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}
int main()
{
  int n=12345;
  cout<<count_digits(n)<<endl;
  return 0;
}

Time Complexity= O(n)

*/

// SOLUTION 2


/*
#include<bits/stdc++.h>

using namespace std;

int coutn_digits(int n){
    string x=to_string(n); // converting int to string type
    return x.length();     // this is how we find length of string
}
int main()
{
    int n=12345;
    cout<<coutn_digits(n)<<endl;
  
  return 0;
}

Time Complexity= O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int digits=floor(log10(n)+1);  // use of logrithmic function
    // The floor() function returns the largest integer that is smaller than or equal to the value passed as the argument (i.e.: rounds down the nearest integer).
    return digits;
}
int main()
{
    int n=12345;
    cout<<count_digits(n)<<endl;
  
  return 0;
}

// Time Complexity= O(1)