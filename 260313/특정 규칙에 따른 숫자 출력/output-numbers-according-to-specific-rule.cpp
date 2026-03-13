#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i <= j){
                if(sum == 9){
                    sum = 0;
                }
                sum++;
                cout << sum << ' ';
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}