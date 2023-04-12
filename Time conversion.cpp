//从键盘输入n分钟，将其换算成小时和分钟输出
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int min,hour;
	cout<<"请输入分钟数n：";
	cin>>min;
	hour=min/60;
	cout<<min<<"分钟可以换算为："<<hour<<"小时"<<min-60*hour<<"分钟"<<endl;
	return 0;
}
