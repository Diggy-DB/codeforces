#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin>>n>>m;
    long long s=0;
    while(n>=m){
        s+=(n/m)*m;
        n=n/m+n%m;
    }
    s+=n;
    cout<<s;
}