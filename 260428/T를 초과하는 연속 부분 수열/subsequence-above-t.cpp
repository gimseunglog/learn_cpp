#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    int max = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > t){
            cnt++;
        }
        else{
            cnt = 0;
        }
        max = (cnt > max) ? cnt : max;
    }
    cout << max << endl;

    return 0;
}