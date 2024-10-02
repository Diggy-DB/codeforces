#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long k;
    while(t--){
        string s = "";
        for(long long i=0; i<8; i++){
            string k;
            cin>>k;
            for(long long j=0; j<8; j++){
                if(k[j]!='.'){
                    s=s+k[j];
                }
            }
        }
        cout<<s<<endl;
    }
}