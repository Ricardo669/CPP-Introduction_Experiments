//编程输出九九乘法表
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int x,y=1;
	for(x=1;x<10;)
	{
		cout<<setw(8*(9-x))<<"";  //输出前面的空格
		y=1;
		while(y<=x)  //输出表达式
		{
			cout<<left<<x<<"*"<<y<<"="<<setw(4)<<x*y;
			y++;
		}
		cout<<endl;
		x++;
	}
}