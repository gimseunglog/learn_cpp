#include <iostream>

using namespace std;

int N;

int sum_square(int N){
    if(N == 0)
        return 0;
    else{
        int n = N % 10;
        return n * n + sum_square(N / 10);
    }
}

int main() {
    cin >> N;

    cout << sum_square(N);

    return 0;
}