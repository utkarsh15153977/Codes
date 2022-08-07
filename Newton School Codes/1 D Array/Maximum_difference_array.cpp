/*

Problem Statement
Given an array of integers of size N, your task is to find the maximum parity index of this array.
Parity Index is the maximum difference between two indices i and j (1 <= i <= j <= N) of an array A such that Ai < Aj.
Input
First line of contains a single integer N, next line contains N space separated integers depicting the values of array.

Constraints:-
1 < = N < = 100000
1 < = Arr[i] < = 100000
Output
Print the maximum value of j- i under the given condition, if no pair satisfies the condition print -1.
Example
Sample Input:-
5
1 2 3 4 5

Sample Output:-
4

Explanation:
The maximum difference of jth - ith index is 4:(4th - 0th), also arr[4] > arr[0]


Sample Input:-
5
5 4 3 2 1

Sample Output:-
-1

*/



#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
 
int main() {

	// Your code here
    int n;
    cin>>n;
    vector<int> vec(n);
    for(auto &i:vec)cin >> i;
    vector<int> greater(n);
    int maxi = vec[n-1];
    greater[n-1] = maxi;
    for(int i=n-2; i>=0; i--)
    {
        if(maxi < vec[i])
            maxi = vec[i];
        greater[i] = maxi;
    }
    if(is_sorted(vec.rbegin(), vec.rend()))
    {
        cout << -1 << endl;
    }
    else
    {
        int ans=INT_MIN;
    for(int i=0; i<n; i++)
    {
        auto it = upper_bound(greater.rbegin(), greater.rend(), vec[i]);
        if(it == greater.rend())continue;
        int j = n-1-(it - greater.rbegin());
        ans = max(ans, abs(j-i));
    }
    cout << ans << endl;
    }
    return 0;
}
