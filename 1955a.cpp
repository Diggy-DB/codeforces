#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, a, b;
        cin>>n>>a>>b;
        if(2*a>b){
            cout<<(n/2)*b+(n%2)*a;
        }
        else{
            cout<<n*a;
        }
        cout<<endl;
    }
}