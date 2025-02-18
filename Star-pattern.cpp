#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<=4;i++){
		for(int j=4;j>=i;j--){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<"*";
		}
		for(int l=0;l<i;l++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<=3;i++){
		for(int j=0;j<=i+1;j++){
			cout<<" ";
		}
		for(int k=4;k>i;k--){
			cout<<"*";
		}
		for(int l=3;l>i;l--){
			cout<<"*";
		}
		cout<<endl;
	}
}


