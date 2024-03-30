#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enetr numberto reverse ";
    int n,i=0;
    cin>>n;
     int rev=0;
    while(n!=0){
        int digit=n%10;
        // if(rev>(INT64_MAX)/10||(rev<(INT64_MIN))){return 0;}
        rev=(rev*10)+digit;
        n=n/10;
        i++;

    }
    cout<<rev;
}