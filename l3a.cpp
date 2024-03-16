// print  sum of n numbers 
#include <iostream>
using namespace std;
int main(){
    int n,sum=0,i=1;
cout<<"enter then number to find the sum of "<<endl;
cin>>n;
while(n>=i){
    sum=sum+i;
    i=i+1;
}
cout<<"sum is"<<sum;
}