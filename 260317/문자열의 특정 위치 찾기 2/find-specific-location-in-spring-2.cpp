#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(fruit[i][2] == c || fruit[i][3] == c){
            cout << fruit[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}