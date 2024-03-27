#include<iostream>
using namespace std;
int main()
{
    int i,j,n,l,c;
    cout<<"enter number of rows for final pattern "<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {  int k=1;
        while(k<=n-i+1)
        {
            
            cout<<k;
            
            k++;
        }
        j=i-1;
        
         while(j){
            cout<<"*";
            
            j--;
         }
        int b=i-1;
        
        while(b)
         {
            cout<<"*";
            b--;
            
        }
        l=1;int m=n-i+1;
        while(l<=n-i+1){
            
           cout<<m;
           m--;
            
              l++;
        }
        i++;
        cout<<endl;
    }
    cout<<"DABANG PROBLEM OF PATTERN DONE BY ME (GITSAMPRO)";
}