#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0;
    vector<int> arr{1, 2, 1, 2, 1, 3, 2};

    sort(arr.begin(), arr.end());

    int i = 0;

    while (i < arr.size())
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;
}
