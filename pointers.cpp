#include <iostream>;
using namespace std;
int main(){
	int i=5,*p,*q,j=7;
	p=&i;q=&j;
	cout<<i<<" "<<j<<" "<<*p<<" "<<*q<<endl;
	*p=i+*q;
	cout<<i<<" "<<j<<" "<<*p<<" "<<*q<<endl;
	j=*p+i;
	cout<<i<<" "<<j<<" "<<*p<<" "<<*q<<endl;
	p=q;
	cout<<i<<" "<<j<<" "<<*p<<" "<<*q<<endl;
	i=*q+j;
	cout<<i<<" "<<j<<" "<<*p<<" "<<*q<<endl;
}
