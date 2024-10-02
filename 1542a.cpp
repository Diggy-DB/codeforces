#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt=0;
        for(long long i=0; i<2*n; i++){
            long long x;
            cin>>x;
            if(x%2==0){
                cnt++;
            }
        }
        if(cnt!=n){
            cout<<"No";
        }
        else cout<<"Yes";
        cout<<endl;
    }
}