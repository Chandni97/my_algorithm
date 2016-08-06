#include <iostream>
#include <vector>
using namespace std;

void balance_vector(int min,int min1, int min2, vector <int> &s1, vector<int> &s2);
void find_min(vector<int> s1, vector <int> s2, vector<int> s3);
int sum_vector(vector <int> s);

int main()
{
	long n1, n2, n3;
	int num;

	cin >> n1 >> n2 >> n3;

	vector <int> s1(n1);
	vector <int> s2(n2);
	vector <int> s3(n3);

	for(int i=n1-1; i>=0; i--)
	{
		cin >> s1[i];
	}

	for(int i=n2-1; i>=0; i--)
	{
		cin >> s2[i];
	}

	for(int i=n3-1; i>=0; i--)
	{
		cin >> s3[i];
	}

	find_min(s1,s2,s3);
}

void find_min(vector<int> s1, vector <int> s2, vector<int> s3)
{
	int sum1, sum2, sum3;
	sum1 = sum_vector(s1);
	sum2 = sum_vector(s2);
	sum3 = sum_vector(s3);

	//cout << "sums = " << sum1 << " " << sum2 << " " << sum3 << " " << endl;

	if(sum1 == sum2 && sum2 == sum3)
	{
		cout << sum1;
		return;
	}

	if(sum1<sum2)
	{
		if(sum1<sum3)
			balance_vector(sum1,sum2,sum3,s2,s3);
		else
			balance_vector(sum3,sum1,sum2,s1,s2);
	}

	else
	{
		if(sum3<sum2)
			balance_vector(sum3,sum1,sum2,s1,s2);
		else
			balance_vector(sum2,sum1,sum3,s1,s3);
	}

	find_min(s1,s2,s3);
}

int sum_vector(vector <int> s)
{
	int total = s.size();
	int sum=0;
	for(int i=0; i<total; i++)
	{
		sum = sum+s[i];
	}

	return sum;
}

void balance_vector(int min, int min1, int min2, vector <int> &s1, vector<int> &s2)
{
	int last_index1 = s1.size() - 1;
	int last_index2 = s2.size() - 1;

	if(min1 != min)
		s1.erase(s1.begin() + last_index1);
	if(min2 != min)
		s2.erase(s2.begin() + last_index2);

}