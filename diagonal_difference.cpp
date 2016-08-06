#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,sumd=0,sumdd=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++)
    {
       for(int a_j = 0;a_j < n;a_j++)
       {
          cin >> a[a_i][a_j];
       }
    }

    for(int i=0; i<n; i++)
    {
    	sumd = sumd + a[i][i];
    }

    for(int i=0,j=n-1; i<n,j>=0; i++,j--)
    {
    	sumdd = sumdd + a[i][j];
    }

    cout << abs(sumd-sumdd) << endl;

    return 0;
}
