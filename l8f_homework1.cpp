#include<iostream>
using namespace std;
int main(){
    cout<<"eneter amount "<<endl;
    int n,note;
    cin>>n;
    cout<<"enter note value"<<endl<<"- 100"<<endl<<" - 50"<<endl<<"20"<<endl<<"1"<<endl;
    cin>>note;
    switch(note){
        case 100:{ n=n/100;cout<<n<<" 100 rupees notes needed";}break;
        case 50:{ n=n/50;cout<<n<<" 50 rupeesnotes needed";}break;
        case 20:{ n=n/20;cout<<n<<" 20 rupees notes needed";}break;
        case 1:{ n=n/1;cout<<n<<"coins needed";}break;
        default : {cout<<"wrong input";}
    }
}