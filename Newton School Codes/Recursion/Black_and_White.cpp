/*

Problem Statement
How many ways are there to place a black and a white knight on an N * M chessboard such that they do not attack each other? The knights have to be placed on different squares. A knight can move two squares horizontally and one square vertically (L shaped), or two squares vertically and one square horizontally (L shaped). The knights attack each other if one can reach the other in one move.
Input
The first line contains the number of test cases T. Each of the next T lines contains two integers N and M which is size of matrix.

Constraints:
1 <= T <= 100
1 <= N, M <= 100
Output
For each testcase in a new line, print the required answer, i.e, number of possible ways to place knights.
Example
Sample Input:
3
2 2
2 3
4 5

Sample Output:
12
26
312

Explanation:
Test Case 1: We can place a black and a white knight in 12 possible ways such that none of them attacks each other.

*/


#include<bits/stdc++.h>
using namespace std;

long long numOfWays(int n, int m);

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}


long long numOfWays(int N, int M)
{
    long long ans=0;
    long long k=N*M;
    int mod=1000000007;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int c=0;
            if(j+2<M&&i+1<N)
                 c++;
            if(j+2<M&&i-1>=0)
                 c++;
            if(i+2<N&&j+1<M)
                  c++;
            if(i+2<N&&j-1>=0)
                 c++;
             if(j-2>=0&&i+1<N)
                 c++;
            if(j-2>=0&&i-1>=0)
                 c++;
            if(i-2>=0&&j+1<M)
                  c++;
            if(i-2>=0&&j-1>=0)
                 c++;
            ans=((ans+k)%mod-(c+1)%mod+mod)%mod;
        }
    }
    return ans;
}
