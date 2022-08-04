/*
Problem Statement
Given two integers a and b, your task is to check following conditions:-
1. If a <= 10 and b >= 10 (Logical AND).
2. Atleast one from a or b will be even (Logical OR).
3. if a is not equal to b (Logical NOT).
Input
The first line of the input contains 2 integers a and b.

Constraints:
1 <= a, b <= 100
Output
Print true if the condition holds in each function else false
Example
Sample Input:-
3 12

Sample Output:-
true true true

Sample Input:-
10 10

Sample Output:-
true true false
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int a,b;
    cin>>a>>b;
    if(a<=10&&b>=10){
        cout<<"true"<<" ";
    }
    else{
        cout<<"false"<<" ";
    }
    if(a%2==0||b%2==0){
        cout<<"true"<<" ";
    }
    else{
        cout<<"false"<<" ";
    }
    if(a!=b){
        cout<<"true"<<" ";
    }
    else{
        cout<<"false"<<" ";
    }
    return 0;
}
