#include <iostream>
#include <math.h>
using namespace std;

int reversenum(int n)
{
    int sum;
    int store = 0;
    while (n != 0)
    {
        sum = n % 10;
        store = store * 10 + sum;
        n /= 10;
    }

    return store;
}
int main()
{

    int i, j, k;
    int count = 0;

    cin >> i >> j >> k;

    while (i <= j)
    {
        int reverse = reversenum(i);

        if (abs(i - reverse) % k == 0)
        {
            count++;
        }
            i++;
    }
    cout << count << endl;

}
