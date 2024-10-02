#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        int a, b;
        a = n/10;
        b = n/100*10+n%10;
        // cout<<a<<' '<<b<<endl;
        if(a>b) cout<<a;
        else cout<<b;
    }
}