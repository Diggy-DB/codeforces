#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        while(s[n-1-cnt]=='('){
            cnt++;
        }
        int k=0;
        while(s[k]==')'){
            k++;
        }
        cout<<max(cnt, k)<<endl;
    }
}