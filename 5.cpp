// backtracking 

#include <iostream>
using namespace std;
void digit(int i,int n){
	if(i<1){
		return;
	}
	digit(i-1,n);
	cout<<i<<" ";
}

int main(){
	int n;
	cin>>n;
	digit(n,n);
}
