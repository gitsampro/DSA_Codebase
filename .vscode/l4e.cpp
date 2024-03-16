//print 1
//      2 3
//      3 4 5
#include <iostream>
using namespace std;
// int main()
// {
//     cout << "enter no of rwo" << endl;
//     int n, i = 1, j ,count;
//     cin >> n;
//     while (n > i)
//     {
//         count=i;
//         j=1;
//         while (i >= j)
//         {
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// WITHOUT USING 4TH VARIABLE
      //   i tried but cant do it
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
            cout<<i+j-1<<" ";// i+j-1 and i-j+1 print same but reverse
            
            j++;
        }
        cout << endl;
        i++;
    }
}