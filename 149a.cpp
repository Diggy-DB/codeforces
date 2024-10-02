#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k;
    cin>>k;
    long long a[13];
    for(long long i=0; i<12; i++){
        cin>>a[i];
    }
    sort(a, a+12);
    long long s=0;
    long long tm=0;
    while(s<k && tm<12){
        tm++;
        s=s+a[12-tm];
    }
    if(s<k){
        cout<<-1;
    }
    else{
        cout<<tm;
    }
}