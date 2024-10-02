#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int cnt=0;
        int x[26]={0};
        for(int i=0; i<n; i++){
            int k=s[i]-'A';
            if(x[k]==0){
                cnt+=2;
                x[k]=1;
            }
            else{
                cnt++;
            }
        }
        std::cout<<cnt<<std::endl;
    }
}