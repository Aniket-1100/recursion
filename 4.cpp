#include <iostream>
using namespace std;
void digit(int n){
	cout<<n<<" ";
	if(n==1){
		return;
	}
	digit(n-1);
}
int main(){
	int n;cin>>n;
	digit(n);
}
