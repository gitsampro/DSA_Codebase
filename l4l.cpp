#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
    int s=1;
  while(i<=n){
    
   int k=1;
while(k<=n-i){
    
    cout<<" ";
    k++;
}

int j=1;
while(j<=i){
    
    cout<<s;
    s++;
    j++;
}
  
  
i++;
cout<<endl;

  }

}