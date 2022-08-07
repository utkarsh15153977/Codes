/*

Problem Statement
Mohit has an array of N integers containing all elements from 1 to N, somehow he lost one element from the array.
Given N-1 elements your task is to find the missing one.
Input
First line of input contains a single integer N, the next line contains N-1 space separated integers.

Constraints:-
1 < = N < = 1000
1 < = elements < = N
Output
Print the missing element
Example
Sample Input:-
3
3 1

Sample Output:
2

Sample Input:-
5
1 4 5 2

Sample Output:-
3

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sol;
    bool b=false;
    for(int i=0;i<n;i++){
       if(a[i+1]-a[i]==2){
           sol=a[i]+1;
           b=true;
           break;
       }
       else{
           b=false;
       }
    }
    if(b==true){
        cout<<sol;
    }
    else {
        cout<<n;
    }
    return 0;
}
