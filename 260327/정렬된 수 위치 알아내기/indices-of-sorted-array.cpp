#include <iostream>
#include <algorithm>
using namespace std;

class point{
    public:
        int num, location;
        point() { }
        point(int num, int location){
            this->num = num;
            this->location = location;
        }
};

bool cmp(point a, point b){
    if(a.num != b.num)
        return a.num < b.num;
    return a.location < b.location;
}

int main() {
    int N;
    point p[1000];
    int result[1000];

    cin >> N;

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        p[i] = point(n, i + 1);
    }

    sort(p, p + N, cmp); 
    
    for(int i = 0; i < N; i++){
        result[p[i].location - 1] = i + 1;
    }

    for(int i = 0; i < N; i++){
        cout << result[i] << ' ';
    }

    return 0;
}
