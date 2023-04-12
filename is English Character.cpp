//从键盘输入一个字符，使用双分支结构（if…else）判断其是否为英文字母。
#include <iostream>
using namespace std;
int main(void)
{
	int ascii;
	char c;
	cout<<"请输入任意一个字符:";
	cin>>c;
	ascii=c;//求得字母的ASCII码
	if((ascii>=65&&ascii<=90)||(ascii>=97&&ascii<=122))
		cout<<"输入的字符"<<c<<"是英文字母"<<endl;
	else
		cout<<"输入的字符"<<c<<"不是英文字母"<<endl;
	return 0;
}
