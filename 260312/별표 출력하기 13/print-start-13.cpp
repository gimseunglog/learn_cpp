#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        if(i % 2 == 0){
            for(int j = 0; j < N - i / 2; j++){
                cout << '*';
            }
        }
        else{

        }
        cout << endl;
    }
    return 0;
}