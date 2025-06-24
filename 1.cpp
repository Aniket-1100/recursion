#include <bits/stdc++.h>
using namespace std;

void countUp(int n) {
    if (n == 10) {
        return;
    }
    cout << n << " ";
    countUp(n + 1); 
}

int main() {
    int n = 0;
    countUp(n);
    return 0;
}
