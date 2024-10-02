#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%3==0){
            cout<<"Second";
        }
        else cout<<"First";
        cout<<endl;
    }
}