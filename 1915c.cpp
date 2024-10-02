#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
   while(t--){
      long long n;
      cin>>n;
      long long s=0;
      for(long long i=0; i<n; i++){
         long long x;
         cin>>x;
         s+=x;
      }
      long long k=sqrt(s);
      if(k*k==s){
         cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
   }
}