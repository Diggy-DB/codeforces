#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long i=0;
        while(((s[i]=='0' and s[n-1-i]=='1') || (s[i]=='1' and s[n-1-i]=='0')) && i<n/2){
            i++;
        }
        cout<<n-i*2<<endl;
    }
}