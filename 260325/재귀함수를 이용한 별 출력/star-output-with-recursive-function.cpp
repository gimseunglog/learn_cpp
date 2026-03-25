#include <iostream>

using namespace std;

int N;

void printStar(int N){
    if(N > 0){
        printStar(N-1);
        for(int i = 0; i < N; i++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    cin >> N;

    printStar(N);

    return 0;
}