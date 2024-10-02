#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int x = 'A' + 'B' + 'C';
        for(long long i=0; i<3; i++){
            string s;
            cin>>s;
            bool chk=false;
            int sm=0;
            for(long long j=0; j<3; j++){
                if(s[j]=='?'){
                    chk=true;
                }
                else{
                    sm=sm+s[j];
                }
            }
            if(chk==true){
                cout<<char(x-sm)<<endl;
            }
        }
    }
}