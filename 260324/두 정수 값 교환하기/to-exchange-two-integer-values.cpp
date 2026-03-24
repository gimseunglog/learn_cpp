#include <iostream>
using namespace std;

void swap(int n, int m){
    cout << m << ' ' << n;
}

int main() {
    int n, m;
    cin >> n >> m;
    swap(n, m);
    return 0;
}