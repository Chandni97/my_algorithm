#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int total, divisible;
    vector <long> s; 
    vector <int> d;
    int prime=0;
    int num;
    cin >> total >> divisible;
    for(int i=0; i<total; i++)
        {
            cin >> num;
            s.push_back(num);
        }
    
     for(int i=0; i<total-1; i++)
         {
            for(int j=i+1; j<total; j++)
                {
                    if((i+j)%divisible == 0)
                        {
                            d.push_back(s[i]);
                            d.push_back(s[j]);
                            s[i]=0;
                            s[j]=0;
                        }
                        
                }
         }
    for (int i=0; i< d.size(); i++)
        {
             int boo = 0;
             for (int j=0; j< s.size(); j++)
                 {
                    if(s[j]!=0)
                    {
                        if((d[i]+s[j])%divisible == 0)
                            boo = 1;
                            
                    }
                 }
            if(boo == 0)
                {
                    s.push_back(d[i]);
                }
        }
    
    for (int j=0; j<s.size(); j++)
        {
            if(s[j]!=0)
                prime++;
        }
    cout << prime;
   
    return 0;
}
