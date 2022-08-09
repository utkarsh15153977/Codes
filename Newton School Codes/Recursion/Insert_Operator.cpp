/*

Problem Statement
You are given a sequence of numbers of size N. You have to find if there is a way to insert + or - operator in between the numbers so that the result equals K.
Input
The first line of input contains two integers N and K. The next line of input contains N space- separated integers depicting the values of the sequence.

Constraints:-
1 <= N <= 20
-10^15 <= K <= 10^15
0 <= Numbers <=10^13
Output
Print YES if possible else print NO.
Example
Sample Input:-
4 4
1 2 3 4

Sample Output:-
YES

Sample Input:-
4 1
1 2 3 4

Sample Output:-
NO

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int solve(long a[], long sum, int i, int n){
    if(i==n){
        if(sum==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    return solve(a, sum-a[i], i+1,n)*solve(a, sum+a[i], i+1,n);
}

int main() {

	// Your code here
    int n;
    cin>>n;
    long k;
    cin>>k;
    long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = solve(a, k, 0, n);
    if(solve==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
