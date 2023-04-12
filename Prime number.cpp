#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int m,n,sum1=0,sum2=0,i,j;
	bool flag=true;
	cout<<"请输入范围m和n:";
	cin>>m>>n;
	if (m>n)//使得总是m<n
	{
		m=m+n;
		n=m-n;
		m=m-n;
	}
	cout<<m<<"~"<<n<<"之间满足条件的素数为"<<endl;
	for(i=m,j=2;i<=n;i++)
	{
		if(i%10==3||i%10==7)
		{
			for(j=2,flag=true;j<i;j++)
			{
				if(i%j==0)
				{flag=false;break;}
			}//判断素数
			if(flag==false)
			    continue;
			sum1=sum1+i;
			cout<<i<<"  ";
			if(i/10%10!=6)
				sum2=sum2+i;
	}
	cout<<endl<<"满足条件的素数和是："<<sum1<<endl;
	cout<<"满足条件且十位数不为6的素数和是："<<sum2<<endl;
}