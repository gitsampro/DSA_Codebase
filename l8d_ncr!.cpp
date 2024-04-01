#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
        
    }return ans;
}
int ncr(int n,int r){
    int a=fact(n);
    int b=fact(r)*fact(n-r);

    return a/b;
}


int main(){
    cout<<"enter n and r  to find nCr "<<endl;
    int n,r,ans;
    cin>>n>>r;
  
    cout<<ncr(n,r);
}