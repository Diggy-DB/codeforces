#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int x=0, y=0;
        bool z = false;
        for(long long i=0; i<n; i++){
            char c;
            cin>>c;
            if(c=='U'){
                y++;
            }
            if(c=='D'){
                y--;
            }
            if(c=='R'){
                x++;
            }
            if(c=='L'){
                x--;
            }
            if(x==1 && y==1){
                z = true;
            }
        }
        if(z==true) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}