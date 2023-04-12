//假设三年期存款年利率rate为3.4%，输入存款本金，计算三年期存款到期后的本息和，并输出
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float principal,rate=0.034;
	cout<<"请输入存款本金（元）：";
	cin>>principal;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<"3年后存款的本息和为"<<principal+3*rate*principal<<"元"<<endl;
	return 0;
}
