#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        map<long long, long long>a;
        long long n;
        cin>>n;
        bool k = false;
        for(long long i=0; i<n; i++){
            long long m;
            cin>>m;
            if(a.find(m)==a.end()){
                a[m]=1;
            }
            else{
                a[m]++;
            }
        }
        for(auto i : a){
            if(i.second>=3){
                cout<<i.first;
                k=true;
                break;
            }
        }
        if(k==false){
            cout<<-1;
        }
        cout<<endl;
    }
}