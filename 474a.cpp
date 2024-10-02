#include<bits/stdc++.h>
using namespace std;
int main(){
    char key;
    string s;
    cin>>key>>s;
    string st = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string nw = "";
    if(key=='R'){
        for(long long i=0; i<s.size(); i++){
            for(long long j=0; j<st.size(); j++){
                if(s[i]==st[j]){
                    nw = nw + st[j-1];
                }
            }
        }
    }
    if(key=='L'){
        for(long long i=0; i<s.size(); i++){
            for(long long j=0; j<st.size(); j++){
                if(s[i]==st[j]){
                    nw = nw + st[j+1];
                }
            }
        }
    }
    cout<<nw;
}