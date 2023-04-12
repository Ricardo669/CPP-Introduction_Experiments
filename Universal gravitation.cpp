//计算地球与月球之间的万有引力
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	const double G=6.67e-11;
	float m1,m2,R;
	cout<<"请输入地球的质量：";
	cin>>m1;
	cout<<"请输入月球的质量：";
	cin>>m2;
	cout<<"请输入地月距离：";
	cin>>R;
	cout<<"地球与月球之间的万有引力为："<<G*m1*m2/R/R <<"N"<<endl;
	return 0;
}
