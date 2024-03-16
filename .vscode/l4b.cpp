//print *
//      **
#include <iostream>
using namespace std;
int main()
{
    cout << "enter no of rwo" << endl;
    int n, i = 1, j ;
    cin >> n;
    while (n > i)
    {
        j=1;
        while (i >= j)
        {
            cout<<"*";
            j++;
        }
        cout << endl;
        i++;
    }
}