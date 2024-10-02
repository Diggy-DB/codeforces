#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long odd =0, even=0;
        long long n;
        cin>>n;
        while(n--){
            long long x;
            cin>>x;
            if(x%2==0) even+=x;
            else odd+=x;
        }
        if(even>odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}