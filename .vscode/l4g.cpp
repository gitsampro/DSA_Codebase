// 5
// ABCD
// EFGH
// IJKL
// MNOP
#include <iostream>
using namespace std;
int main()
{
    cout << "enter no of rows" << endl;
    int i=1, j, n;
    
    cin >> n;
    char c=('A');
    while (i<n)
    {
        j = 1;
        while (j<n)
        {
           
            cout<<c;
            c++;
            j++;

        }cout<<endl;i++;
    }
}