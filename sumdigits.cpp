#include <iostream>
using namespace std;
int sumdigit(int n)
{
	if(n==0)
	return 0;
	else
	return n%10+sumdigit(n/10);
}
int main(){
	cout<<sumdigit(654321);
}
