#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int o;
    int cnt = 0;
    int max = 1;
    int max2 = 1;

    for(int i = 1; i < N; i++){
        if(nums[i] >= max){
            max2 = max;
            max = nums[i];
            cnt++;
            o = max;
        }
        if(cnt >= 2){
            cnt = 0;
            o = -1;
            max = max2;
        }
    }
    cout << o;

    return 0;
}
