#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s1, s2;
    cin>>s1;
    long long cnt=1;
    for(long long i=0; i<n-1; i++){
        string k;
        cin>>k;
        if(k!=s1){
            s2 = k;
        }
        else cnt++;
    }
    if(cnt>n/2){
        cout<<s1;
    }
    else cout<<s2;
}