#include<iostream>
#include<vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
 int huge = *max_element(candles.begin(),candles.end());
 int count =0;
 for ( int i = 0; i < candles.size(); i++){
     if ( candles[i] == huge){
         count++;
     }
 }
 return count;

}
