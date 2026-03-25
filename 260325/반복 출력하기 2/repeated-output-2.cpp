#include <iostream>
using namespace std;

void printHello(int N){
    if(N > 0){
        cout << "HelloWorld" << endl;
        printHello(--N);
    }
}

int main() {
    int N;
    cin >> N;
    printHello(N);
    return 0;
}