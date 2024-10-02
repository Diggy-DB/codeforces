#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long l, r;
        cin>>l>>r;
        if(r>=2*l){
            cout<<l<<' '<<2*l;
        }
        else{
            cout<<-1<<' '<<-1;
        }
        cout<<endl;
    }
}