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
