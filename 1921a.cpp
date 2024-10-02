#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        for(long long i=0; i<3; i++){
            int x, y;
            cin>>x>>y;
            if(x==a){
                cout<<(y-b)*(y-b);
            }
        }
        cout<<endl;
    }
}