#include <bits/stdc++.h>
using namespace std;

void name(int n){
    if(n==0){
        return;
    }
    cout<<"Aniket"<<endl;
    name(n-1);
}

int main(){
    name(5);
}
