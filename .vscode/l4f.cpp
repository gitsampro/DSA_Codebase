// print  reverse counting in triangular fashion  and end every row with 1
// AAAAAAA
// BBBBBBB
// CCCCCCC.....


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter num ber of rows"<<endl;
//     int i,j,n;
//     cin>>n;
//     i=1;
//     while(i<n)
//     {
//         j=1;
//         while(j<n){
            
//             char B='A'+i-1;
//             cout<<B;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
//******** PRINT***************  
//        ABC
//        ABC
//        ABC
#include<iostream>
using namespace std;
int main(){
    cout<<"enter number of rows"<<endl;
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n){
            
            char B='A'+i-1;
            cout<<B;
            j++;
        }
        cout<<endl;
        i++;
    }
}
