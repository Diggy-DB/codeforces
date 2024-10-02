#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        long long mn=10000005;
        long long s=0;
        for(int i=0; i<n; i++){
            long long x;
            std::cin>>x;
            s+=x;
            if(x<mn) mn=x;
        }
        std::cout<<s-mn*n<<std::endl;
    }
}