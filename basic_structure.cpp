#include <iostream>
using namespace std;
struct {
	int a[10];
	string n[10];
	int sno[10];
}myStructure;
int main()
{
	for(int i=0;i<=9;i++)
	{
		cout<<"enter name :"<<endl;
		cin>>myStructure.n[i];
		cout<<"enter score :"<<endl;
		cin>>myStructure.a[i];
		myStructure.sno[i]=i+1;
	}
		
	cout<<"********************Details********************"<<endl;		
	cout<<"S.NO\t\tScore\t\tName"<<endl;
	
	for(int i=0;i<=9;i++)
	{
		
		cout<<myStructure.sno[i]<<"   \t\t"<<myStructure.a[i]<<"   \t\t"<<myStructure.n[i]<<endl;
	}
	
}
