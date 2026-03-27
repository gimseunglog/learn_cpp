#include <iostream>
#include <algorithm>
using namespace std;

class information{
    public:
        int height, weight, number;
        information() { }
        information(int height, int weight, int number){
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
};

bool cmp(information a, information b){
    if(a.height != b.height)
        return a.height > b.height;
    if(a.weight != b.weight)
        return a.weight > b.weight;
    return a.number < b.number;
}

int main() {
    int n;
    information info[1000];

    cin >> n;

    for(int i = 0; i < n; i++){
        int h, w;
        cin >> h >> w;
        info[i] = information(h, w, i + 1);
    }

    sort(info, info + n, cmp);

    for(int i = 0; i < n; i++){
        cout << info[i].height << ' ' << info[i].weight << ' ' << info[i].number << endl;
    }


    return 0;
}