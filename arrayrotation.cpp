/*algorithm from codechef which takes input from the user in a vector and rotates it for x times specified by the user*/

#include <iostream>
#include <vector>
using namespace std;

void array_rotate(vector<int>&vec); //function to rotate the vector

int main()
{

	int total; // total number of inputs
	int rotation; // times of rotation
	int input; // index number 

	vector<int>vec;
	vector<int>ans;

	cin >> total;
	cin >> rotation;
	cin >> input;

	for (int i=0 ; i<total ; i++) //get the inputs
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	for (int i=0; i<rotation; i++) // rotate the vector
	{
		array_rotate(vec);
	}

	for(int i=0; i<input; i++) // get the indices at which the user wants to see the element
	{
		int num;
		cin >> num;
		ans.push_back(num);
	}

	for(int i=0; i<input; i++) // show the result
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
		vec[i] = vec[i-1];
	}

	vec[0] = lastnum;
}