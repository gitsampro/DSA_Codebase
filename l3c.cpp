//  find prime numbers betweenone to  input numbers 
#include<iostream>
using namespace std;
int main(){
cout<<"enter a number to find prime "<<endl;
int n,i=2;
cin>>n;
while(n>i){
    if (n%i==0){
        cout<<"not prime for "<<i<<endl;
    }
    else{
    cout<<"prime for "<<i<<endl;
        }
        i=i+1;
}
}