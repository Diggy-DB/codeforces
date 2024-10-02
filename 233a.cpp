#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2==1) cout<<-1;
    else{
        for(long long i=0; i<n; i++){
            if(i%2==0){
                cout<<i+2<<' ';
            }
            else cout<<i<<' ';
        }
    }
}