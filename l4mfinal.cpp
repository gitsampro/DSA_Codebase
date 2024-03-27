#include<iostream>
using namespace std;
int main()
{
    int i,j,n,l;
    cout<<"enter number of rows for final pattern "<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {  int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        j=1;
        int a=1;
        while(j<=i){
            cout<<a;
            a++;
            j++;
        }
        int b=i-1;
        
        while(b)
        {
            cout<<b;
            b--;
            
        }
        i++;
        cout<<endl;
    }
}
// 4
//    1
//   121
//  12321
// 1234321
// finally i am done pattern problems