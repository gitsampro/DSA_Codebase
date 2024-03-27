#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n,st,sp;
    cout<<"enter row number"<<endl;
    cin>>n;
 while(i<=n)
 {
    

    sp=n-i+1;
while(sp<n)
{
cout<<" ";
sp++;
}
st=i-1;

while(st<n)
{
    cout<<"*";
   
    st++;
    
}
 
i++;
cout<<endl;

 }
}
// 5
// *****
//  ****
//   ***
//    **
//     *