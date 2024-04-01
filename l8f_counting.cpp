#include<iostream>
using namespace std;
void count(int a){
    for(int i=1;i<=a;i++){
        cout<<"  line   "<<i<<endl;
    }

}
int main(){
    cout<<"enter number to counting"<<endl;
    int a;
    cin>>a;
    count(a);
    
}
////counting program done with void fuction type