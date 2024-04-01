#include<iostream>
using namespace std;
//my  function to check even or odd 
 bool isodd(int a){
    if (a&1){
        return 1;
    }
    return 0;

}
// main start from here
int main(){
    cout<<"enter number to check odd or even"<<endl;
    int b;
    cin>>b;
    if(isodd(b)){
        cout<<"odd number";
    }
    else
    cout<<"even number";
}