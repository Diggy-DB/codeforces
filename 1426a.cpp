#include<iostream>
int main(){
    long long t;
    std::cin>>t;
    //  1   3   x+3     2x+3    3x+3    4x+3
    //  2x-2   2x 3x    4x    5x    6x

    //  2   x+2 2x+2    3x+2    4x+2    5x+2
    //  2x-1    3x-1

    //  1   2   3       4       5       6
    while(t--){
        int n, x, lvl=1, i=2;
        std::cin>>n>>x;
        while(i<n){
            i+=x;
            lvl++;
        }
        std::cout<<lvl<<std::endl;
    }
}