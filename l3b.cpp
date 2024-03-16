//sum of n even numbers
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number to find sum of n even numbers "<<endl;
    int sum=0,i=2,n;
    cin>>n;
while (i<=n)
{
sum=sum+i;
i=i+2;

}
cout<<"sum of even nu is"<<sum;
}