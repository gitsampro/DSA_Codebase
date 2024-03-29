#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int bit,n,i=0,num=0;
    cin>>n;
    while(n!=0){
        bit=n%10;
        if(bit==1){
            num=num+(bit*pow(2,i));
           
        }
         n=n/10;
            i++;
    }
    cout<<num;
}