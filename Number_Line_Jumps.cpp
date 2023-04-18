#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    int kangaroo_first = x1 + v1;
    int kangaroo_second = x2 + v2;
    int count = 10000;
    while (count >= 0)
    {
        if (kangaroo_first == kangaroo_second)
        {
            return "YES";
        }
        else
        {
            kangaroo_first += v1;
            kangaroo_second += v2;
        }
        count--;
    }
    return "NO";
}
int main()
{
    int one;
    int dist_1;
    int two;
    int dist_2;
    cin >> one >> dist_1;
    cin >> two >> dist_2;
    cout << kangaroo(one, dist_1, two, dist_2) << endl;
    return 0;
}