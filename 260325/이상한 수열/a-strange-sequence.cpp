#include <iostream>
using namespace std;

int cal(int n){
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return cal(n / 3) + cal(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << cal(N);
    return 0;
}