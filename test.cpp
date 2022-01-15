#include<iostream>
#include<stdio.h>
using namespace std;

void biger_num(int num_frist,int num_second);

int main(){
    int a=1,b=2,c,n;
	scanf("%d",&n);
	if (n==1)
	{
		printf("1\n");
		return 0;
	}
	if (n==2)
	{
		printf("2\n");
		return 0;
	}
	for (int i=1;i<=n-3;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",b);
    cout<<"HelloWorld!"<<endl;
    return 0;
}

void biger_num(int num_frist,int num_second){
    int biger_num = (num_frist > num_second) ? num_second : num_frist;
    cout<<biger_num<<endl;
}


	
