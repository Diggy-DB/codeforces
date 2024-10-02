#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt = 4;
        while(n%(cnt-1)!=0){
            cnt=cnt*2;
        }
        cout<<n/(cnt-1)<<endl;
    }
}