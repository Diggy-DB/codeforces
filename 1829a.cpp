#include<string>
#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        std::string a="codeforces";
        int cnt=0;
        for(int i=0; i<10; i++){
            if(s[i]!=a[i]) cnt++;
        }
        std::cout<<cnt<<std::endl;
    }
}