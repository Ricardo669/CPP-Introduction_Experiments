//输入某人的身高、体重，求其BMI
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float weight,height,bmi;
	cout<<"请输入某人的体重(kg):";
	cin>>weight;
	cout<<"请输入此人的身高(m):";
	cin>>height;
	bmi=weight/height;
	bmi=bmi/height;
	cout.precision(4);
	cout<<"Your BMI is:"<<bmi<<"kg/m^2"<<endl;
	return 0;
}
