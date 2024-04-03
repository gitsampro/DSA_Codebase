//checking i/p number is prime or not
#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0){return 0;}
    }
    return 1;
}
int main(){
    cout<<"enter a number to chek prime number"<<endl;
    int n;
    cin>>n;
    if(prime(n)==0){cout<<"not prime";}
    else
    cout<<"prime";
}//perfectly working program












