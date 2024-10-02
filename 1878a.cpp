#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, k;
        bool chk=false;
        cin>>n>>k;
        for(long long i=0; i<n; i++){
            long long x;
            cin>>x;
            if(x==k){
                chk=true;
            }
        }
        if(chk==true) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}