#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector<int> ans;
  
    for ( int i =0; i< keyboards.size(); i++){
        for ( int j = 0; j < drives.size(); j++){
         int  sum =  keyboards[i] + drives[j];
            if (sum < b){
                ans.push_back(sum);
            }
        }
    }

    if (ans.size() == false){
        return -1;
    }
   
    return  *max_element(ans.begin(),ans.end());

}

int main() {
    vector<int>keyboards {{3 ,1}};
    vector<int>drives {{5,2,8}};
    int budjet = 10;
    cout << getMoneySpent(keyboards,drives,budjet) << endl;
}