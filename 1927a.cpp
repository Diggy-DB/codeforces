#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        string s;
        cin>>n>>s;
        bool k=false;
        long long f, l;
        for(long long i=0; i<s.size(); i++){
            if(s[i]=='B'){
                if(k==false){
                    f = i;
                    k = true;
                }
                l = i;
            }
        }
        cout<<l-f+1<<endl;
    }
}