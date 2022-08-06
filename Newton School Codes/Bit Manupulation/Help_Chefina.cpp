/*

Problem Statement
Chef and Chefina are playing a game, Chef asks Chefina that whether the ith bit is set in the binary representation of the number. Chefina knows how to do it but she is taking quite a lot time. You are Chefina friend so help her out from this situation.
Input
The first line of the input contains test case value T.
Next T lines contains two values N and K, i. e the number N and the Kth bit.

Constraints
1 <= T <= 1e5
1 <= N <= 1e18
1 <= K <= 61
Output
Print "SET" if the Kth bit is set and "NOT SET" if it's not.
Example
Sample Input
2
2 1
1 1

Sample Output
NOT SET
SET

Explanation
2's binary representation : 10 hence the first bit is 0 which is not set
1's binary representation : 1 hence the first bit is 1 which is set

*/


#include <iostream>
using namespace std;
#define int long long int
void isKthBitSet(int n, int k)
{
	if (n & (1 << (k - 1)))
		cout << "SET"<<endl;
	else
		cout << "NOT SET"<<endl;
}


int32_t main()
{
	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;
		isKthBitSet(n, k);
	}
	
	return 0;
}
