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
        long long k=0;
        for(long long i=0; i<n; i++){
            if(s[i]>k){
                k = s[i];
            }
        }
        cout<<k-'a'+1;
        cout<<endl;
    }
}