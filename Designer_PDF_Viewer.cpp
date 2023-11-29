#include<iostream>

using namespace std;


int designerPdfViewer(vector<int> h, string word) {
    char a_to_z[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int len = word.length();
    int ans = 0;
    for ( int i = 0;i < len; i++)
    {
        for ( int j = 0; j < h.size(); j++)
        {
            if ( word[i] == a_to_z[j])
            {
                int store =  h[j];
                ans = max(store,ans);
            }
        }
    }
    return ans*len;

}
