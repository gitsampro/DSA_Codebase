#include<iostream>
using namespace std;
int main(){
    cout<<"enter row number"<<endl;
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        char start=('A'+n-i);
        while(j<=i){
            cout<<start;
            start++;
            j++;
            
        }cout<<endl;i++;
    }
}