#include <iostream>
using namespace std;
int calculater(int power)
{
    int result = 2;
    while (power > 0)
    {
        result = result * 2;
        power--;
    }
    return result;
}
bool check(int input)
{
    int start = 0;
    int end = input;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int temp = calculater(mid);
        if (temp == input)
        {
            return true;
        }
        else if (temp > input)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}
int main()
{
    int input;
    cin >> input;
    int result =  check(input);
    if(result == 1){
        cout <<"input is power of 2 \n";
    } else cout <<"input is not power of 2\n";
}