#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        long long x[305];
        cin>>n;
        for(long long i=0; i<n; i++){
            cin>>x[i];
        }
        for(long long i=0; i<n/2; i++){
            cout<<x[i]<<' '<<x[n-1-i]<<' ';
        }
        if(n%2==1){
            cout<<x[n/2];
        }
        cout<<endl;
    }
}