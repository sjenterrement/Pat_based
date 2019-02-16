#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string s1, s2;
vector<char> v1, v2;
char ch;

int main() {
	cin >> s1;
	cin >> s2;
	int len = s2.length();
	int f = 0;
	string::size_type idx;
	string::iterator it1, it2;

	while (len--)
	{
		idx = s1.find(s2[f]);

		if (idx == string::npos)
		{
			f++;
		}
		else
		{
			it1 = s1.begin() + idx;
			it2 = s2.begin() + f;
			s1.erase(it1);
			s2.erase(it2);
		}
	}

	if (s2.empty())
	{
		cout << "Yes " << s1.length();
	}
	else
	{
		cout << "No " << s2.length();
	}


}