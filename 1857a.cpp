#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        long long n;
        long long cnt=0;
        std::cin>>n;
        while(n--){
            long long a;
            std::cin>>a;
            if(a%2==1){
                cnt++;
            }
        }
        if(cnt%2==0){
            std::cout<<"YES";
        }
        else std::cout<<"NO";
        std::cout<<std::endl;
    }
}