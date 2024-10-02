#include<iostream>
void merge_sort(long long a[], long long n){
    if(n>=2){
        long long x[n/2], y[n-n/2];
        for(long long i=0; i<n/2; i++){
            x[i]=a[i];
        }
        merge_sort(x, n/2);
        for(long long i=0; i<n-n/2; i++){
            y[i]=a[n/2+i];
        }
        merge_sort(y, n-n/2);
        int i=0, j=0;
        for(int k=0; k<n; k++){
            if(x[i]<=y[j] && i<n/2){
                a[k]=x[i];
                i++;
            }
            else{
                if(x[i]>=y[j] && j<n-n/2){
                    a[k]=y[j];
                    j++;
                }
            }
        }
    }
}

int main(){
    long long t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        long long x[n];
        for(int i=0; i<n; i++){
            std::cin>>x[i];
        }
        merge_sort(x, n);
        for(int i=0; i<n; i++){
            std::cout<<x[i]<<' ';
        }
        std::cout<<std::endl;
        bool chk=true;
        for(int i=0; i<n-1; i++){
            if(x[i]==x[i+1]){
                chk=false;
                break;
            }
        }
        if(chk==true) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
}