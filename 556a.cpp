#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long cnt0=0, cnt1=0;
    for(long long i=0; i<n; i++){
        char x;
        cin>>x;
        if(x=='0'){
            cnt0++;
        }
        if(x=='1'){
            cnt1++;
        }
    }
    cout<<abs(cnt0-cnt1);
}