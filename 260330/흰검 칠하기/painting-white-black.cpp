#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int white[200001] = {0};
    int black[200001] = {0};
    int color[200001] = {0};

    int cur = 100000;

    for(int i = 0; i < n; i++){
        int x;
        char d;
        cin >> x >> d;

        if(d == 'L'){
            for(int j = 0; j < x; j++){
                white[cur]++;

                if(white[cur] >= 2 && black[cur] >= 2)
                    color[cur] = 3;
                else
                    color[cur] = 1;

                if(j != x - 1) cur--;
            }
        }
        else{
            for(int j = 0; j < x; j++){
                black[cur]++;

                if(white[cur] >= 2 && black[cur] >= 2)
                    color[cur] = 3;
                else
                    color[cur] = 2;

                if(j != x - 1) cur++;
            }
        }
    }

    int w = 0, b = 0, g = 0;

    for(int i = 0; i < 200001; i++){
        if(color[i] == 1) w++;
        else if(color[i] == 2) b++;
        else if(color[i] == 3) g++;
    }

    cout << w << ' ' << b << ' ' << g;
}