#include<iostream>
#include<string>
int main(){
    std::string s;
    std::cin>>s;
    s='a'+s;
    long long cnt=0;
    //a b c d e f g h i j k l m n o p q r s t u vwxyzabcdefghijklmnopqrstuvwxyz
    //
    for(long long i=0; i<s.length()-1; i++){
        cnt=cnt+std::min(abs(s[i+1]-s[i]), 26-abs(s[i+1]-s[i]));
    }
    std::cout<<cnt;
}