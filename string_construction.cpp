#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int total;
	cin >> total;
	ostringstream a;


	for(int i=0; i<total; i++)
	{
		int cost=0;
		size_t found;
		string s;
		cin >> s;
		string p = "";
		for (int i=0; i<s.length(); i++)
		{
			found = p.find_first_of(s[i]);
			if(found != std::string::npos)
				p=p+s[i];
			else
			{
				p=p+s[i];
				cost++;
			}
		}

		 a << cost << endl;

	}

	cout << a.str();

	return 0;
}