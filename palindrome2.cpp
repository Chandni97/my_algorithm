#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int total, count, change, difference;
	cin >> total >> count;
	cin >> num;
	string a = "9";

	int mid = total/2;
	if(total%2 != 0)
		{
			cout << -1 ;
			return 0;
		}
	string s1 = num.substr(0,mid);
	string s2 = num.substr(mid,num.length());
     
	for(int b=0,c=mid-1; b<mid,c>=0; b++,c--)
	{
		if(s1[b] != s2[c])
		{
			change++;
		}
	}

	difference = count - change;
	

	for(int i=0,j=mid-1; i<mid,j>=0,difference>0; i++,j--)
	{
		s1[i] = a[0];
		s2[j] = a[0];
		difference--;
		count-=2;
	}


 
	for(int x=0,y=mid-1; count>0; x++,y--)
	{
		if(s1[x] != s2[y])
		{
			if(int(s1[x]) > int(s2[y]))
			{
				s2[y]=s1[x];
			}
			else 
				s1[x] = s2[y];
			count--;
		}
	}

	
	for(int e=0,f=mid-1; e<mid,f>=0; e++,f--)
	{
		if(s1[e]!=s2[f])
		{
			cout << -1;
			return 0;
		}
	}

	cout << s1+s2;
	return 0;
	
}