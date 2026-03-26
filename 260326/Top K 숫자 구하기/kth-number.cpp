#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int k, n;
    cin >> n >> k;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[k - 1];
    return 0;
}