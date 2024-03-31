#include<math.h>
#include<iostream>
using namespace std;
int main(){
    cout<<"enter nay namuber to check it is power of 2 or not"<<endl;
    int n,i;
    cin>>n;
    bool a=0;
        for(i=0;i<30;i++){
            if(n==pow(2,i)){
            a=1;}
        else
         a=0;
    }
    if(a==0){cout<<"false not a power of 2";}
    else {cout<<"True it is a power of 2";}
}