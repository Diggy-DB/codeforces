#include<iostream>
#include<string>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        std::string x, y;
        std::cin>>x>>y;
        bool chk=1;
        for(long long i=0; i<n; i++){
            if(x[i]!=y[i] && (!((x[i]=='G' && y[i]=='B') || (x[i]=='B' && y[i]=='G')))){
                chk=0;
                break;
            }
        }
        if(chk==1) std::cout<<"YES";
        else std::cout<<"NO";
        std::cout<<std::endl;
    }
}