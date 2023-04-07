#include<iostream>
#include<vector>
using namespace std;

//Only Function

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int Alice = 0;
    int Bob = 0;
    int i =0 ;
    int j = 0;
    vector<int> ans;
    while ( i < a.size() && j < b.size()){
        if ( a[i] > b[j]){
            Alice++;
        }
        if ( a[i] < b[j]){
            Bob++;
        }
        
      i++;
      j++;
    }
    
    ans.push_back(Alice);
    ans.push_back(Bob);
    return ans;
}

