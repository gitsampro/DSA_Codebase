#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<(~a)<<endl;
    // cout<<"XOR a^b "<<(a^b)<<endl;

    // cout<<(17>>1)<<endl;
    int i,n;
    //cout<<"enter number terms you need in fibonacci series"<<endl;
    cin>>n;
    // for (i=0;i<=n;i++){
    //     int next=a+b;
    //     cout<<next<<endl;
    //     a=b;
    //     b=next;

    // }
                //  below is the program to find prime nu,ber
    // bool prime=1;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //     prime=0;
    //     break;}

      
    // }
    // if (prime==0){cout<<"n0 prime"<<endl;}
    // else
    // cout<<"prime";
                   // continue statement
    // for(i=1;i<n;i++){
    //     cout<<"this iteration is"<<i<<"  time run"<<endl;
    //     continue;
    //     cout<<"the part that will be skipped in 'countiue'";
    // }

    // for(i=0;i<=15;i+=2){
    //     cout<<i<<" ";

    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }
    // ************************leet code problem 1281
//    int sum=0;
//     int product=1;
//     while(n!=0){
//         int digit=n%10;
//         product =product * digit;
//         sum = digit + sum; 
//         n=n/10;
        
        
//     }
//     int ans = product-sum;
    
//     cout<<ans;
//     return ans;
//********************leetcode 2
int count=0;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
}
cout<<"number of 1  is "<<count<<" times";

}