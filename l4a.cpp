///pattern 
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
 while(n>i){
    int j=1;
    while (j<n){
        cout<<n-j+1 ;
        j++;
    }
    cout<<endl;
    i++;
 }
}
