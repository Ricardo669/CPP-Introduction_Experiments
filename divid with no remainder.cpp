//从键盘输入一个整数，使用双分支结构（if…else）判断其是否能被3和5整除
#include <iostream>
using namespace std;
int main(void)
{
	cout<<"请输入一个整数：";
	int z;
	cin>>z;
	if(z%3!=0)
		cout<<z<<"不能被3整除"<<endl;
	else
		cout<<z<<"能被3整除"<<endl;
	if(z%5!=0)
		cout<<z<<"不能被5整除"<<endl;
	else
		cout<<z<<"能被5整除"<<endl;
	return 0;
}
