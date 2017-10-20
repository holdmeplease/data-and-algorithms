#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<char> a;
	vector<char> b; 
	vector<char> s;
	vector<char>*pl;
	vector<char>*ps;
	char ch;
	char temp;
	while (cin.get(ch))
	{
		if (ch == ' ')
			break;
		a.push_back(ch);
	}
	while (cin.get(ch))
	{
		if (ch == '\n')
			break;
		b.push_back(ch);
	}
	if (a.size() > b.size())
	{
		pl = &a;
		ps = &b;
	}
	else if (a.size() <= b.size())
	{
		pl = &b;
		ps = &a;
	}
	int c = 0;
	int i = pl->size() - 1;

	for (auto it = ps->rbegin(); it != ps->rend(); it++,i--)
	{
		temp = pl->operator[](i)+c+*it-'0';
		if (temp > '9')
		{
			c = 1;
			temp -= 10;
		}
		else
		{
			c = 0;
		}
		s.push_back(temp);
	}
	if (a.size() == b.size()&&c==1)
		s.push_back('1');
	else if(a.size()!=b.size())
	{
		for (i; i >= 0; i--)
		{
			temp = (*pl)[i] + c ;
			if (temp > '9')
			{
				c = 1;
				temp -= 10;
			}
			else
			{
				c = 0;
			}
			s.push_back(temp);
		}
		if (c == 1)
			s.push_back('1');
	}
	for (auto it = s.rbegin(); it != s.rend(); it++)
		cout << *it;
}