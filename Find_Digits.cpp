#include <iostream>
using namespace std;

int findDigits(int num)
{
    int count = 0;
    int store;
    while (num != 0)
    {
        store = num % 10;

        if ((store != 0) && (num % store == 0))
        {
            count++;
        }

        num /= 10;
    }
    return count;
}

int main()
{
    int n = 11;
    cout << findDigits(n) << endl;

    return 0;
}
