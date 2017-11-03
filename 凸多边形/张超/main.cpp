#include<iostream>
using namespace std;
int judgee(double *p,int n){
	bool flag=0;
	if(((p[0]-p[2*n-2])*(p[3]-p[2*n-1])-(p[1]-p[2*n-1])*(p[2]-p[2*n-2]))>0)
	{flag=1;cout<<"0 ";}
	for(int j=0;j<n*2-2;j=j+2)
	    if(((p[j+2]-p[j])*(p[(j+5)%(2*n)]-p[j+1])-(p[j+3]-p[j+1])*(p[j+4]-p[j]))>0)
	    {flag=1;
	     cout<<(j+2)/2<<" ";}
	if(flag==0)
		cout<<"y";
	cout<<endl;
	return 0;
}
int readd(){
	int N;//此多边形的边数
	cin>>N;
	double *dot=new double[2*N] ;
	for(int j=0;j<N*2;j++)
		cin>>dot[j];
	judgee(dot,N);
	delete []dot;
	return 0;
}
int main(){
	int K;//多边形个数
	cin>>K;
    for(int i=0;i<K;i++)
		readd();//每个read函数处理一个多边形，循环调用K次
	return 0;
}