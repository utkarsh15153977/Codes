#include<bits/stdc++.h>
using namespace std;

void TowerOfHenoi(int n, char a,char c, char b){
    if(n==0){
        return;
    }
    TowerOfHenoi( n-1, a, b,  c);
    cout<<n<<":"<<a<<"->"<<c<<endl;
    TowerOfHenoi( n-1, b, c, a);
}
int main(){
    int n;
    cin>>n;
    TowerOfHenoi(n,'A','C','B');
}
