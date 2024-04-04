#include <iostream>
using namespace std;
int getmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int n;
    cout << "enter size of array";

    cin >> n;
    int num[n];
    cout << "now enter the elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "max value is" << getmax(num, n)<<endl;
    cout << "min value is" << getmin(num,n)<<endl;

}
