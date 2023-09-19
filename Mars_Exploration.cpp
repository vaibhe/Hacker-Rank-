#include<iostream>
using namespace std;

int marsExploration(string s) {
    string actual = "";
    int count = 0;
int val = s.length()/3;
while ( val != 0){
    actual += 'S';
    actual += 'O';
    actual +=  'S';
    val--;
}


int i = 0;
int j = 0;

while ( i < s.length() && j < actual.length()){
    if ( s[i] == actual[i]){
        i++;
        j++;
    }

    else{
        count++;
        i++;
        j++;
    }
}
return count;
 

}