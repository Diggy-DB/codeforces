#include<bits/stdc++.h>
using namespace std;
class BinaryTreeNode{
public:
    BinaryTreeNode(long long val){
        l = NULL;
        r = NULL;
        data = val;
    }

    bool add_child(long long val){
        if(val<data){
            if(this->l!=NULL){
                return this->l->add_child(val);
            }
            else{
                this->l=new BinaryTreeNode(val);
                return true;
            }
        }
        else{
            if(val>data){
                if(this->r!=NULL){
                    return this->r->add_child(val);
                }
                else{
                    this->r=new BinaryTreeNode(val);
                    return true;
                }
            }
            else{
                return false;
            }
        }
    }
private:
    BinaryTreeNode* l;
    BinaryTreeNode* r;
    long long data;
};
bool solve(long long n){
    long long x;
    cin>>x;
    BinaryTreeNode k(x);
    long long a[105];
    for(long long i=0; i<n-1; i++){
        cin>>a[i];
    }
    for(long long i=0; i<n-1; i++){
        if(k.add_child(a[i])==false){
            return false;
        }
    }
    return true;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(solve(n)==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}