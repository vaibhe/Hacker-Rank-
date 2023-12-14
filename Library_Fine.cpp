#include<iostream>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    
   int  res = 0;
    if (y1 > y2){
        res = 10000;
    } 
    if (m1 > m2 && y1 == y2) {
        res = 500 * (m1 - m2);
    }
    if (d1 > d2 && m1 == m2 && y1 == y2){
     res = 15 * (d1 - d2);
    }
        

    return res;

}