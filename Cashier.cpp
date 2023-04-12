//输入商品数量、总金额、付款金额，计算找零。
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int a;
	float sum,money;
	cout<<"请输入商品数量:";
	cin>>a;
	if(a<0)//判断商品数量合法性
	{
		cout<<"A商品数量输入错误！"<<endl;
		return 0;
	}
	if(a>19)//判断是否打折，并计算总金额
		sum=0.8*7.3*a;
	else
		sum=7.3*a;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<"商品总金额为"<<sum<<endl;
	cout<<"请输入付款金额：";
	cin>>money;
	cout<<"找零金额为"<<money-sum<<endl;
	return 0;
}
