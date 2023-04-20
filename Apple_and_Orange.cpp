void counts(vector<int> saeb, vector<int> santra, int s, int t)
{
    int count_1 = 0;
    int count_2 = 0;
    int l, m = 0;
    while (l < saeb.size() && m < santra.size())
    {

        for (int i = s; i <= t; i++)
        {
            if (saeb[l] == i)
            {
                count_1++;
            }

            if (santra[m] == i)
            {
                count_2++;
            }
        }
        l++;
        m++;
    }
    cout << count_1 << endl;
    cout << count_2 << endl;
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    vector<int> saeb;
    vector<int> santra;
    int i, j = 0;
    while (i < apples.size() && j < oranges.size())
    {
        saeb.push_back(a + apples[i]);
        santra.push_back(b + oranges[j]);
        i++;
        j++;
    }

    counts(saeb, santra, s, t);
}