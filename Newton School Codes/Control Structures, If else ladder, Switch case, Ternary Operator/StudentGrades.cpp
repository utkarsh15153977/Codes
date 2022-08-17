/*

Student Grades
Easy

Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Given marks of a student in 5 subjects(any). You need to find the grade he/she would get on the basis of percentage obtained. Grades computed are as follows:

If the percentage of marks is >= 80 then print Grade ‘A’
If the percentage is <80 and >=60 then print Grade ‘B’
If the percentage is <60 and >=40 then print Grade ‘C’
else prins Grade ‘D’
Input
The input contains 5 integers separated by spaces.

Constraints:
1 <= marks <= 100
Output
You need to print the grade obtained by him/her.
Example
Sample Input:
75 70 80 90 100

Sample Output:
A

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    double perc=(a+b+c+d+e)/5;
    if(perc>=80){
        cout<<"A";
    }
    else if(perc<80&&perc>=60){
        cout<<"B";
    }
    else if(perc<60&&perc>=40){
        cout<<"C";
    }
    else{
        cout<<"D";
    }
    return 0;
}
