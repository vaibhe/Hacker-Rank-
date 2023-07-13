#include <iostream>
using namespace std;

void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};
    display(arr);

    int fir = 0;
    int sec = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                fir += arr[i][j];
            }

            if (i + j == 2)
            {
                sec += arr[i][j];
            }
        }
        cout << endl;
    }

    int ans = abs(fir - sec);
    cout << ans << endl;
}