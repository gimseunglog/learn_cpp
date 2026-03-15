#include <iostream>
using namespace std;

int main() {
    int a[10];
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    int j = 0;
    int max, min;
    while(1){
        if(a[j] < 500){
            max = a[j];
            break;
        }
        j++;
    }
    j = 0;
    while(1){
        if(a[j] > 500){
            min = a[j];
            break;
        }
        j++;
    }
    for(int i = 0; i < 10; i++){
        if(a[i] < 500 && a[i] > max){
            max = a[i];
        }
        if(a[i] > 500 && a[i] < min){
            min = a[i];
        }
    }
    cout << max << ' ' << min;

    return 0;
}