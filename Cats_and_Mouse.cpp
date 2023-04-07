#include <iostream>
using namespace std;
string Cat_Mouse(int catA, int catB, int mouseC)
{
    int unit1 = abs(mouseC - catA);
    int unit2 = abs(mouseC - catB);

    if (unit2 < unit1)
    {
        return "Cat B";
    }

    else if (unit2 > unit1)
    {
        return "Cat A";
    }
    else
    {
        return "Mouse C";
    }
}

int main()
{
    int a = 1;
    int b = 3;
    int c = 2;

    cout << Cat_Mouse(a, b, c) << endl;
}