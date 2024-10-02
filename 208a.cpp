#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    s=s+"WUB";
    string k[205]={""};
    long long j = 0;
    long long i = 0;
    while(i<s.size()-2){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            j++;
            i+=3;
        }
        else{
            k[j]=k[j]+s[i];
            i++;
        }
    }
    for(long long t=0; t<=j; t++){
        if(k[t]!=""){
            cout<<k[t]<<' ';
        }
    }
}