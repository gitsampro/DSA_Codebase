//print  lower half triangular structure and write couting in it
//1
//2 3  
#include <iostream>
using namespace std;
int main()
{
    cout << "enter no of rwo" << endl;
    int n, i = 1, j ,count=1;
    cin >> n;
    while (n > i)
    {
        j=1;
        while (i >= j)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}