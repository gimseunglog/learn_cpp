#include <iostream>
using namespace std;

int main() {
    int N = 8;
    double sum = 0;
    double score;
    for(int i = 0; i < N; i++){
        cin >> score;
        sum += score;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / N;
    return 0;
}