#include <iostream>
using namespace std;
void digit(int i,int n){
	if(i>n){
		return;
	}
	cout<<i++<<" ";
	digit(i,n);
}
int main(){
	int n;
	cin>>n;
	int i=1;
	digit(i,n);
}
