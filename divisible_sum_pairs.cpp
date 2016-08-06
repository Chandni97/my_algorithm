#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int total;
	int divisible;
	int ans=0;
	cin >> total >> divisible;
	vector <int> a(total);

	for(int i=0; i<total; i++)
	{
		cin >> a[i];
	}

	for(int i=0; i<total; i++)
	{
		for(int j=i+1; j<total; j++)
		{
			if((a[i]+a[j])%divisible == 0)
                {
				    ans++;
                    cout << a[i] << " " << a[j] << endl;
                }
		}
	}

	cout << ans << endl;
	return 0;
}