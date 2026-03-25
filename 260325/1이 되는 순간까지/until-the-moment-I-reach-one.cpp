#include <iostream>

using namespace std;

int N;
int i = 0;

int cal(int n){
    if(n == 1)
        return 1;
    i++;
    if(n % 2 == 1){
        return cal(n / 3);
    }
    else{
        return cal(n / 2);
    }
}

int main() {
    cin >> N;

    cal(N);
    cout << i;

    return 0;
}