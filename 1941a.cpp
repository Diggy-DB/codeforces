#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, m, k;
        cin>>n>>m>>k;
        long long s=0;
        long long x[105], y[105];
        for(long long i=0; i<n; i++){
            cin>>x[i];
        }
        for(long long i=0; i<m; i++){
            long long a;
            cin>>a;
            for(long long j=0; j<n; j++){
                if(a+x[j]<=k){
                    s++;
                }
            }
        }
        cout<<s<<endl;
    }
}