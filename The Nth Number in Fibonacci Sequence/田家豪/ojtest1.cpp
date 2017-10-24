#include"stdio.h"

int main()
{
	int n;
	scanf("%d",&n);
	int *num=new int [n];	
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(int i=0;i<n;i++)
	{
		int Fk1=0,Fk2=1;
		if(num[i]==0)num[i];
		else
		{
			for(int k=0;k<num[i]%19948-1;k++)			//斐波那契数列模9973是周期数列
			{
				int temp;
				temp=Fk2;
				Fk2=Fk1+Fk2;
				Fk1=temp;
				Fk2=Fk2%9973;							//计算数列中的项模9973，根据模的性质，
														//取余数后相加和相加后再取余相等
			}
		    num[i]=Fk2;
		}
	}

	for(int i=0;i<n;i++)								//一次性输出各个计算结果
		printf("%d\n",num[i]);

	return 0;
}