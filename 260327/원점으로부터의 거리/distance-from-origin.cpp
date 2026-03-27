#include <iostream>
#include <algorithm>
using namespace std;

class length{
    public:
        int x, y, num;
        length() { }
        length(int x, int y, int num){
            this->x = x;
            this->y = y;
            this->num = num;
        }
};

int abs(int n){
    if(n < 0)
        return n * -1;
    return n;
}

bool cmp(length a, length b){
    return (abs(a.x) + abs(a.y)) < (abs(b.x) + abs(b.y));
}

int main() {
    int n;
    length l[1000];

    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        l[i] = length(x, y, i + 1);
    }

    sort(l, l + n, cmp);

    for(int i = 0; i < n; i++){
        cout << l[i].num << endl;
    }

    return 0;
}