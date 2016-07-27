#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	//cin >> num;

	for(int i=num; i>0; i--)
	{
		int s=0;
		for(int j=0; j<num; j++)
		{
			if(s < i-1)
			{
				cout << " ";
				s++;
			}
			
			else
				cout << "#";
		}

		cout << endl;
	}
}
