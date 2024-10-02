#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        long long pro=1, mn=10;
        long long cnt=0;
        while(n--){
            long long k;
            std::cin>>k;
            if(k!=0){
                pro=pro*k;
                if(mn>k){
                    mn=k;
                }
            }
            else{
                cnt++;
            }
        }
        if(cnt==0){
            std::cout<<pro/mn*(mn+1)<<std::endl;
        }
        if(cnt==1){
            std::cout<<pro<<std::endl;
        }
        if(cnt>=2){
            std::cout<<0<<std::endl;
        }
    }
}