#include <iostream>
using namespace std;
int binary(int n)
{
	if(n==0)
	cout<<n;
	else
	{
		cout<<n%2;
		binary(n/10);
	}
}
int main(){
	cout<<binary(12);
}
