/*

Problem Statement
Find factorial of a given number N.
Input
User Task
Since this is a functional problem, you don't have to worry about the input. You just have to complete the function Factorial() which contains the given number N.

Constraints:
1 <= N <= 15
Output
Return the factorial of the given number.
Example
Sample Input:-
5

Sample Output:-
120

Sample Input:-
3

Sample Output:-
6

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main() {

	// Your code here
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
    return 0;
}
