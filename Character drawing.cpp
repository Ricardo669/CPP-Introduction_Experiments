//从键盘输入行数和一个字符，输出由这个字符构成的图形。
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int x,i,j=1;char c;
	cout<<"请输入行数和字符：";
	cin>>x>>c;
	for(i=1;i<=x;i++)
	{
		cout<<setw(4*(x-i))<<"";
		j=1;
		while(j<=i)
		{
			cout<<setw(4)<<c;
			j++;
		}
		cout<<endl;
	}
}