#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int total;
	cin >> total;
	vector <int> a(total);
	vector <int> b(1000,0);
	int j=0;
	cin >> a[0];
	int min = a[0];
	for(int i=1; i<total; i++)
	{
		cin >> a[i];
		if(a[i]<min)
			min = a[i];
	}

	for(int i=0; i<total; i++,j=0)
	{

		while(a[i]>=min)
		{
			b[j]++;
			a[i]-=min;
			j++;
		}

		if(a[i]!=0)
		{
			b[j]++;
			a[i]=0;
		}


	}

	for (int i=0; i<b.size();i++)
	{
		if(b[i]!=0)
		cout << b[i] << " ";
	}

}