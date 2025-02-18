#include <iostream>
using namespace std;
int main(){
	cout<<"enter rows";
	int rows;
	cin>>rows;
	for(int i=0;i<rows;i++){
		for(int j=rows;j>i;j--){
			if(i==0 || j==rows || i==j-1)
				cout<<"*";
			else 
				cout<<" ";
		}
		for(int k=0;k<i;k++){
			cout<<" ";
		}
		cout<<endl;
	}
}

