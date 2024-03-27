#include <iostream>
using namespace std;
int main()
{
    int j, sp, i = 1, n;
    cout << "enter row number" << endl;
    cin >> n;
    while (i <= n)
    {
        sp = n - i;
        while (sp)
        {
            cout << " ";

            sp--;
        }

        j = 1;
        while (j <= i)
        {
            cout << "#";
            j++;
        }
        cout << endl;
        i++;
    }
}
