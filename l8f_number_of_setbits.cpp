#include<iostream>
using namespace std;
// this program count number of setbits  using the fuction setbit wich is pass by value
//i/p is 2&3   then  o/p is 3 total 1 in this given number
int setbit(int a){
    int b=0;
    while(a!=0){
        if(a&1){
            b++;
        }
        a>>=1;
    }
    return b;
}

int main(){
    cout<<"enter value of a and b"<<endl;
    int a,b;
    cin>>a>>b;
    int c=setbit(a)+setbit(b);
    cout<<"total nu of setbits in a&b - "<<c;
}