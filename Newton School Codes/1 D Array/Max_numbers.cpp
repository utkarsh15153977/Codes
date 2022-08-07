/*

Problem Statement
Given an array A of size N, you need to find its maximum, 2nd maximum and 3rd maximum element.

Try solving it in O(N) per test case
Input
The first line of the input contains the number of test cases T.

For each test case, the first line of the input contains an integer N denoting the number of elements in the array A. The next line contains 
N (space separated) elements of A.


Constraints:
1 <= T <= 100
3 <= N <= 10^6
1 <= A[i] <= 10^9

Note:-It is guaranteed that the sum of N over all text cases does not exceed 10^6
Output
For each test case, output the first, second and third maximum elements in the array.
Example
Sample Input:
3
5
1 4 2 4 5
6
1 3 5 7 9 8
7
11 22 33 44 55 66 77

Sample Output:
5 4 4
9 8 7
77 66 55

Explanation(might now be the optimal solution):
Testcase 1:
[1 4 2 4 5]
First max = 5
Second max = 4
Third max = 4


*/



#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int t;
    cin>>t;
    while(t>=1){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3];
        cout<<endl;
        t--;
    }
    return 0;
}
