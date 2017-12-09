#include<stdio.h>
#pragma warning(disable:4996)
typedef struct data{
	int row,column,value;
}data;
void paixu(data*q,int l){//冒泡排序
	data temp;
	for(int i=0;i<l-1;i++)
	{for(int j=0;j<l-1-i;j++)
	{if(q[j].row>q[j+1].row)
	{temp=q[j];q[j]=q[j+1];q[j+1]=temp;}
	if(q[j].row==q[j+1].row)
		if(q[j].column>q[j+1].column)
			{temp=q[j];q[j]=q[j+1];q[j+1]=temp;}
	}
	}
}
void transform(data *q,int l){//输出转置
	for(int i=0;i<l;i++)
		if(q[i].value)
			printf("%d %d %d\n",q[i].row,q[i].column,q[i].value);
}
void pluss(data *q,data *qt,int l){//输出加法
	int i=0,j=0;
	while(i<l&&j<l){
	if(q[i].row==qt[j].row&&q[i].column==qt[j].column){
		if(q[i].value+qt[j].value)
			printf("%d %d %d\n",q[i].row,q[i].column,q[i].value+qt[j].value);
		else ;
		i++;j++;
	}
	else if(q[i].row<qt[j].row||(q[i].row==qt[j].row&&q[i].column<qt[j].column)){
		if(q[i].value)
			printf("%d %d %d\n",q[i].row,q[i].column,q[i].value);
		else ;
		i++;
	}
	else {
		if(qt[j].value)
		printf("%d %d %d\n",qt[j].row,qt[j].column,qt[j].value);
	    else ;
		j++;
	}
	}
	while(i<l){
		if(q[i].value)
			printf("%d %d %d\n",q[i].row,q[i].column,q[i].value);
		i++;
	}
	while(j<l){
		if(qt[j].value)
			printf("%d %d %d\n",qt[j].row,qt[j].column,qt[j].value);
		j++;
	}
}
void multi(data *q,data *qt,int m,int l){//输出乘法
	int x=0,y=0;
    for(int i=0;i<m;i++){
		while(q[x].row<i)
			x++;
		y=0;
		for(int j=0;j<m;j++){
			while(qt[y].row<j)
				y++;
			int multi=0;
			int curr=x;
			while(q[x].row==i&&qt[y].row==j){
				if(q[x].column==qt[y].column){
					multi=multi+q[x].value*qt[y].value;
					x++;y++;}
				else  q[x].column<qt[y].column?x++:y++;
			}
			if(multi)
				printf("%d %d %d\n",i,j,multi);
			if(j!=m-1)
			    x=curr;
		}
	}
}
int main(){
	int m,l;
	scanf("%d%d%d",&m,&m,&l);
	data *q=new data[l];
	data *qt=new data[l];
	for(int k=0;k<l;k++){
		scanf("%d%d%d",&q[k].row,&q[k].column,&q[k].value);
		qt[k].row=q[k].column;
		qt[k].column=q[k].row;
		qt[k].value=q[k].value;
	}
	paixu(q,l);
	paixu(qt,l);
	transform(qt,l);//转置
	pluss(q,qt,l);//加法
	multi(q,q,m,l);//乘法
	delete []q;
	delete []qt;
	return 0;
}
