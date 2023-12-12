#include<iostream>
#include<algorithm>
using namespace std;


void plusMinus(vector<int> arr) {
      int positive = 0;
    int negative = 0;
    int zero = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
        
    }

    double pRatio = static_cast<double>(positive) / arr.size();
    double nRatio = static_cast<double>(negative) / arr.size();
    double zRatio = static_cast<double>(zero) / arr.size();
    
    cout << pRatio << endl;
    cout << nRatio << endl;
    cout << zRatio << endl;

}
