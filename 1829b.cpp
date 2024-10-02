#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mx=0;
        long long k=0;
        for(long long i=0; i<n; i++){
            bool x;
            cin>>x;
            if(x==0) k++;
            else{
                if(k>mx){
                    mx=k;
                }
                k=0;
            }
        }
        if(k>mx){
            mx=k;
        }
        cout<<mx<<endl;
    }
}