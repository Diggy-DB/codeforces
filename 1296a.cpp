#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        long long s=0;
        bool odd=false, even = false;
        cin>>n;
        for(long long i=0; i<n; i++){
            long long x;
            cin>>x;
            s+=x;
            if(x%2==0) even=true;
            else odd=true;
        }
        if(s%2==1) cout<<"YES";
        else{
            if(odd==true && even==true){
                cout<<"YES";
            }
            else cout<<"NO";
        }
        cout<<endl;
    }   
}