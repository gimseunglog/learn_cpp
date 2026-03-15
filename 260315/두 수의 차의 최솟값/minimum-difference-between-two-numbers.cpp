#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[10];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int min = 100;
    int mis;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            mis = a[i] - a[j];
            if(mis < 0){
                mis *= -1;
            }
            if(mis != 0 && min > mis){
                min = mis;
            }
        }
    }
    cout << min;
    return 0;
}