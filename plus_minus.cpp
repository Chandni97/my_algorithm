#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    double zeroes=0.0,neg=0.0,pos=0.0;
    double zeron = 0.0, negn = 0.0, posn = 0.0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       if ( arr[arr_i] == 0)
           zeroes++ ;
        else if (arr[arr_i] < 0)
            neg++;
        else
            pos++;
    }
    
    zeron = zeroes / n;
    negn = neg/n;
    posn = pos/n;
    
    cout << fixed << setprecision(6) << posn << endl << negn << endl << zeron << endl;
    
    
    return 0;
}
