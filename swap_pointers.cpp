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
	int a=3,b=6;
	cout<<a<<b<<endl;
	swap(&a,&b);
	
}

