#include <iostream>
using namespace std;
int max_n(int n)
{
	int max=0;
	if(n==0){
		return max;
	}
	else
	{
	   if(n%10>max)
	   max=n%10;
	   return max_n(n/10);
	}
}
int main(){
	cout<<max_n(6789);
}
