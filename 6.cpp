#include <iostream>
using namespace std;
void digit(int i,int n){
	if(i>n){
		return;
	}
	digit(i+1,n);
	cout<<i<<" ";
}
int main(){
	int n;
	cin>>n;
	digit(1,n);
}
