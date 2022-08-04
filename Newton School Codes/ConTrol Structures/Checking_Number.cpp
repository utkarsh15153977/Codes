/*
Problem Statement
Write a program to check whether a number is positive, negative or zero using switch case.
Input
The first line of the input contains the number

Constraints
-1e9 <= n <= 1e9
Output
Print the single line wether it's "Positive", "Negative" or "Zero"
Example
Sample Input :
13

Sample Output :
Positive

Sample Input :
-13

Sample Output :
Negative
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int n;
    cin>>n;
    int c;
    if(n<0){
        c=1;
    }
    else if(n>0){
        c=2;
    }
    else if(n==0){
        c=0;
    }
    switch(c){
        case 1:
        cout<<"Negative";
        break;

        case 2:
        cout<<"Positive";
        break;

        case 0:
        cout<<"Zero";
        break;
    }
    return 0;
}
