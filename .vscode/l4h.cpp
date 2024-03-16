///A
///BB
///CCC
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter number of rowrs for triangular"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            char ab=('A'+i-1);
            cout<<ab;
            j++;

        }cout<<endl; i++;
    }
    

}