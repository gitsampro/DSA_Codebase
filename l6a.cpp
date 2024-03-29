#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter number to convert into binary"<<endl;
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0){
        int digit=n&1;
        ans=(digit* pow(10,i))+ans;
        n=n>>1;
        i++;

    }
   cout<<ans;
}
//decimal to binary
// this code is not giving right answer at  all input