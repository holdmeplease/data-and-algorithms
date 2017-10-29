#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string plus1="",plus2="",result="";
	cin>>plus1>>plus2;
	if(plus1.size()<plus2.size())		//比较长的数字在上
	{result=plus1;
	plus1=plus2;
	plus2=result;
	result="";
	}
	int i,j,c,h(0);					//h是进位，c是本位
	for(i=plus1.size()-1,j=plus2.size()-1;;i--,j--)
	{
		if(i>=0&&j>=0)
			{result.push_back(char('0'+(h+int(plus1[i]-'0')+int(plus2[j]-'0'))%10));
			h=(h+int(plus1[i]-'0')+int(plus2[j]-'0'))/10;
			}
		else if(j<=-1&&i>=0)
			{result.push_back(char('0'+(h+int(plus1[i]-'0'))%10));
			h=(h+int(plus1[i]-'0'))/10;
			}
		else if(h==1)
			{result.push_back(char('0'+1));
			break;
			}
		else
			break;
	}
	for(int i(result.size()-1);i>=0;i--)
		cout<<result[i];
	return 0;
}