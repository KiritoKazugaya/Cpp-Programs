#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int t;
	t=*x;
	x=y;
	y=&t;
	cout<<*x<<*y<<endl;
}
main()
{
	char a[]={'M','T','W','T','F','S','S'};
	char b[]={'\0','\0','\0','\0','\0','\0','1'};
	char c[]={'2','3','4','5','6','7','8'};
	char d[]={'9','10','11','12','13','14','15'};
	char e[]={'16','17','18','19','20','21','22'};
	char f[]={'23','24','25','26','27','28','29'};
	char g[]={'30','31','\0','\0','\0','\0','\0'};
		for(char ch='a',int i=0;i<=6;i++)
		{
			for(int i=0;i<=6;i++)
			{
			   	cout<<ch[i]<<" ";
			   	ch++;
			}
			cout<<endl;
		}
			
		
}

