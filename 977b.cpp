#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    map<string, int>k;
    string s;
    cin>>s;
    for(long long i=0; i<n-1; i++){
        string sb="";
        sb=sb+s[i]+s[i+1];
        if(k.find(sb)==k.end()){
            k[sb]=1;
        }
        else{
            k[sb]++;
        }
    }
    long long mx=0;
    string st;
    for(auto t: k){
        if(mx<t.second){
            mx = t.second;
            st = t.first;
        }
    }
    cout<<st;
}