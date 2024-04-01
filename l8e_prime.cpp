#include<iostream>
using namespace std;
bool prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }return 1;
}
int main(){
    cout<<"enetr number to check prime"<<endl;
    int n;
    cin>>n;
    int a=prime(n);
    if (a==0){cout<<"not prime";}
    else
    cout<<"prime";
}
//yeeehhhh   i done it  