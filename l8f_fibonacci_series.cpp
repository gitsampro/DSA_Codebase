//i/p  is  n then it give nth value of fibonacci series

#include<iostream>
using namespace std;
int main(){
    cout<<"enter n to get nth value in the fibonacci series number"<<endl;
    int n;
    cin>>n;
    int a=0,b=1;
    if(n==1){cout<<a;}
    else if(n==2){cout<<b;}
    else if(n>2){
    n=n-2;
    for(int i=0;i<n;i++){
        
        int next =a+b;
        a=b;
        b=next;
        
    }
    cout<<n+2<<"th value is "<<b;

}
}