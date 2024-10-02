#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        string x, y;
        x = x+b[0]+a[1]+a[2];
        y = y+a[0]+b[1]+b[2];
        cout<<x<<' '<<y<<endl;
    }
}