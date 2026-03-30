#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int arr[201] = {0};
    for(int i = 0; i < n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        for(int j = x1 + 100; j < x2 + 100; j++){
            arr[j]++;
        }
    }

    int max = -1;
    for(int i = 0; i < 201; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}