/*

If- Leap year
Easy

Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Given a year, find if it is a leap year. Leap year is the year that is multiple of 4. But, multiples of 100 which are not multiples of 400 are not leap years.
Input
The input contains a single integer N

Constraint:
1 <= n <= 5000
Output
Print "YES" if the year is a leap year else print "NO".
Example
Sample Input:
2000

Sample Output:
YES

Sample Input:
2003

Sample Output:
NO

Sample Input:
1900

Sample Output:
NO

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int year;
    cin>>year;
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}
