#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int mat[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>mat[i][j];
        }
    }
    int a=1,b=1;
    a=mat[0][0]*mat[1][1];
    b=mat[0][1]*mat[1][0];
    
    cout<<a-b;
}
