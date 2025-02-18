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
	cout<<"October Horizontal Calendar :"<<endl<<endl;
	string a[7][7]={{" M"," T"," W"," T"," F"," S"," S"},
	{"  ","  ","  ","  ","  ","  "," 1"},
	{" 2"," 3"," 4"," 5"," 6"," 7"," 8"},
	{" 9","10","11","12","13","14","15"},
	{"16","17","18","19","20","21","22"},
	{"23","24","25","26","27","28","29"},
	{"30","31"," "," "," "," "," "}};
    for(int i=0;i<=6;i++)
    {
    	for(int j=0;j<=6;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"October Vertical Calendar :"<<endl<<endl;
	
	for(int i=0;i<=6;i++)
    {
    	for(int j=0;j<=i;j++)
    	{
    		string temp="";
    		temp=a[i][j];
    		a[i][j]=a[j][i];
    		a[j][i]=temp;
		}
	}
	for(int i=0;i<=6;i++)
    {
    	for(int j=0;j<=6;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
