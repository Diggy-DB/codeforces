#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mx=0;
        long long in = 0;
        for(long long i=0; i<n; i++){
            long long a, b;
            cin>>a>>b;
            if(a<=10 && mx<b){
                mx=b;
                in = i+1;
            }
        }
        cout<<in<<endl;
    }
}