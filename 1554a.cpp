#include<bits/stdc++.h>
using namespace std;
long long find_max(long long a[], long long sz){
    if(sz==2){
        return a[0]*a[1];
    }
    else{
        long long l[200005], r[200005];
        long long mn=1000005, m;
        for(long long i=0; i<sz; i++){
            if(mn>a[i]){
                mn=a[i];
                m=i;
            }
        }
        long long mx_l;
        long long j=0;
        // 4
        // 0 1 2 3 4
        // 4 5 6
        while(j<=m){
            l[j]=a[j];
            j++;
        }
        mx_l=find_max(l, m+1);
        j=m;
        
        while(j<sz){
            r[j-m]=a[j];
            j++;
        }
        long long mx_r;
        mx_r=find_max(r, sz-m);
        return max(mx_l, mx_r);
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }
        cout<<find_max(a, n)<<endl;
    }
}