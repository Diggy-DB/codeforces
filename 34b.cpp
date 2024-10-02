#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m, n;
    cin>>n>>m;
    long long a[105];
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int s=0;
    for(long long j=0; j<m ; j++){
        if(a[j]<0 && j<m){
            s=s-a[j];
        }
    }
    cout<<s;
}