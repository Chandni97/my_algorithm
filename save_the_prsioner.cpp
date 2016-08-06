#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tcase;
    long prisoner, sweets, start,i;
    cin >> tcase;
    cin >> prisoner >> sweets >> start;

    for(int j=0; i<tcase; j++)
    {
      for (i=start-1; sweets>0; sweets-- )
          {
             if(i == prisoner)
                 i=1;
             else
                 i++;      
          }
      cout << i;
    }
    return 0;
}

// 1  2  3  4  5  6 
//    1  2  3  4  5
// 6