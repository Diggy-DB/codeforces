#include<iostream>
#include<string>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        std::cout<<a+b<<std::endl;
    }
}