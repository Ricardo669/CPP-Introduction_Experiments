//从键盘输入砖数，列出每种搬法，并统计共有多少种搬法
#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	cout<<"请输入砖数：";
	int n,m,w,sum=0;
	cin>>n;
	cout<<"  男  女  孩"<<endl;
	for(m=0;m<n;m++)
	{
		for(w=0;w<n;w++)
		{
		    if(m*5+w*3==n)
		    {
			cout<<setw(4)<<m<<setw(4)<<w<<setw(4)<<n-w-m<<endl;
			sum=sum++;
            }
		}
	}
	cout<<"共有"<<sum<<"种搬法。"<<endl;
}