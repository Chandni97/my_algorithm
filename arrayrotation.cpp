#include <iostream>
#include <vector>
using namespace std;

void array_rotate(vector<int>&vec);

int main()
{

	int total;
	int rotation;
	int input;

	vector<int>vec;
	vector<int>ans;

	cin >> total;
	cin >> rotation;
	cin >> input;

	for (int i=0 ; i<total ; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	for (int i=0; i<rotation; i++)
	{
		array_rotate(vec);

			for(int i=0; i<total; i++)
			{
				cout << vec[i];
			}

	}

	for(int i=0; i<input; i++)
	{
		int num;
		cin >> num;
		ans.push_back(num);
		//cout << ans[i];
	}

	for(int i=0; i<input; i++)
	{
		cout << vec[ans[i]];
	}

}

void array_rotate(vector<int>&vec)
{
	int last = vec.size() - 1;
	int lastnum = vec[last];

	for(int i=last; i>0; i--)
	{
		cout << "entering loop in the function " << i << endl;
		vec[i] = vec[i-1];
	}

	vec[0] = lastnum;
}