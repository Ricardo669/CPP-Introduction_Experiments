//从键盘输入一个小写英文字母，输出其对应的ASCII码，计算并输出该字母在26个英文字母中的序号。
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	char cha;
	cout<<"请输入一个小写英文字母"<<endl;
	cin>>cha;
	int ascii,seq;
	ascii=cha;
	cout<<"英文字母"<<cha<<"的ASCII码是"<<ascii<<"，是26个英文字母中的第"<<ascii-96<<"个"<<endl;
	return 0;
}
