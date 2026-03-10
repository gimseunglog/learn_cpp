#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c = 0;
    for(int i = 1; i <= N; i++){
        if(i % 4 == 0){
            if(!(i % 100 == 0 && i % 400 != 0)){
                c++;
            }
        }
    }
    cout << c;
    return 0;
}