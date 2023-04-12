//采用单层循环对合数进行质因数分解
#include <iostream>
using namespace std;
void main()
{
	int n,i;
	cout<<"请输入n：";
	cin>>n;
	cout<<n<<"=";
	for(i=2;n>1;)
	{
		if(n%i==0)
		{
			cout<<i;  //输出质因数
			if(i<n)    //防止等式末尾出现*
				cout<<"*";
			n=n/i;
		}
		else
			i++;
	}
	cout<<endl;
}