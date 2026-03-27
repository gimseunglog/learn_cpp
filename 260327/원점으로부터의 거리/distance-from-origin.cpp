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
    int a_len = abs(a.x) + abs(a.y);
    int b_len = abs(b.x) + abs(b.y);
    if(a_len != b_len)
        return a_len < b_len;
    return a.num < b.num;
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