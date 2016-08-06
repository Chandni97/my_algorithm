#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num, s1, s2;
	int total, count, change=0, difference=0;
	cin >> total >> count;
	cin >> num;
	string a = "9";
	string b= "x";

	int mid = total/2;
	if(total%2 == 0)
		{
			s1 = num.substr(0,mid);
			s2 = num.substr(mid,num.length());
		}
	else
	{
			s1 = num.substr(0,mid);
			s2 = num.substr(mid+1,num.length());
			b[0] = num[mid];
	}
     
	for(int b=0,c=mid-1; b<mid,c>=0; b++,c--)
	{
		if(s1[b] != s2[c])
		{
			change++;
		}
	}
	cout << "change = " << change << endl;
	difference = count - change;

	cout << "difference = " << difference << endl;

	for(int i=0,j=mid-1; i<mid,j>=0,difference>0; i++,j--)
	{
		
		if(s1[i] != a[0] && s2[j] != a[0] && s1[i] != s2[j])
		{
			s1[i] = a[0];
			s2[j] = a[0];
			difference--;
			count-=2;
			cout << "difference = " << difference << endl;
			cout << "count = " << count << endl;
		}
	}

	if(difference>0 && b != "x")
	{
		b[0]=a[0];
		count--;
	}



 	cout << "count  =  " << count << endl;
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
			cout << "no" << endl;
			cout << s1 << " " << s2 << endl;
			cout << -1;
			return 0;
		}
	}
    if(b!="x")
		cout << s1+b+s2;
	else
		cout << s1+s2;
	return 0;
	
}