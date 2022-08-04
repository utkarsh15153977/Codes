/*
Problem Statement
Why Geometry?? ?

You are given 4*N+1 distinct points on the cartesian plane. Out of these points, 4*N points represent the end points of N rectangles (with axis parallel to co-ordinate axis), while one point does not belong to any of the rectangles. Report the coordinates of the point that does not belong to any of the N rectangles.
Input
The first line of the input contains an integer N.
The next 4*N+1 lines contain two integers X and Y, the coordinates of the given points.

Constraints
1 <= N <= 100000
0 <= X, Y <= 1000000
The given points always represent N rectangles and an extra point
Output
Output space separated X and Y coordinates of the extra point.
Example
Samle Input
1
1 3
1 1
3 1
1 4
3 3

Sample Output
1 4

Explanation: (1, 1), (1, 3), (3, 1), and (3, 3) represent the end of a rectangle, while (1, 4) is the extra point.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
int main() {

	// Your code here
    ll n;
    cin>>n;
    n=4*n+1;
    ll ax, ay;
    map<ll,ll> mx;
    map<ll,ll> my;
    ll x,y;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        mx[x]++;
        my[y]++;
    }
    for(auto i=mx.begin();i!=mx.end();++i){
        x=i->second;
        if(x%2==0){
            continue;
        }
        else{
            ax=i->first;
            break;
        }
    }
    for(auto i=my.begin();i!=my.end();++i){
        y=i->second;
        if(y%2==0){
            continue;
        }
        else{
            ay=i->first;
            break;
        }
    }
    cout<<ax<<" "<<ay;
    return 0;
}
