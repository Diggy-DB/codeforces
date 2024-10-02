#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt3 = 0;
        long long cnt2 = 0;
        long long k=n;
        while(k%3==0){
            k = k / 3;
            cnt3++;
        }
        while(k%2==0){
            k = k / 2;
            cnt2++;
        }
        if(cnt2>cnt3){
            cout<<-1;
        }
        else{
            if(k>1){
                cout<<-1;
            }
            else{
                cout<<cnt3-cnt2+cnt3;
            }
        }
        cout<<endl;
    }
}