//求分段函数的函数值
#include <iostream>
using namespace std;
int main(void)
{
	float x,y;
	cout<<"请输入x的值（实数）：";
	cin>>x;
	if(x<10)//判断x所在的范围
		y=2*x;
	else
	    y=x/3+1;
	cout<<"y="<<y<<endl;
	return 0;
}
