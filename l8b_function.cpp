#include<iostream>
using namespace std;
// note i made a pow fuction and call in the  line 19 .......******
    int powr(int a,int b)
    {
        int ans=1;
        for(int i=0;i<b;i++){
            
        ans=ans*a;
}
return ans;
}

        int main()
        {
            cout<<"give the input a number and then power  "<<endl;
            int c,d;
            cin>>c>>d;
            cout<<powr(c,d)<<endl;
        }

