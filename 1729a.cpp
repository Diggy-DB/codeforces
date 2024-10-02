#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        if(a-1==abs(b-c)+c-1){
            cout<<3;
        }
        if(a-1<abs(b-c)+c-1){
            cout<<1;
        }
        if(a-1>abs(b-c)+c-1){
            cout<<2;
        }
        cout<<endl;
    }
}