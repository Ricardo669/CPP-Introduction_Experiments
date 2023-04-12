//从键盘输入2个整数，求出较小的数和较大的数。
#include <iostream>
using namespace std;
int main(void)
{
	int a,b,min,max;//定义整型变量
	cout<<"请输入两个整数：";
	cin>>a>>b;
	min=a;
	if (a>b)
	{	
		min=b;//找到较小值
	}
	max=(a>b)?a:b;//条件表达式取较大数
	cout<<"较小数是"<<min<<endl<<"较大数是"<<max<<endl;
	return 0;
}
