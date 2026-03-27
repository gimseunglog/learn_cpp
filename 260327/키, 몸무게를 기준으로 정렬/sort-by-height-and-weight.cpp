#include <iostream>
#include <algorithm>
using namespace std;

class information{
    public:
        string name;
        int height, weight;
        information() { }
        information(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(information a, information b){
    if(a.height != b.height)
        return a.height < b.height;
    return a.weight > b.weight;
}

int main() {
    int n;
    information info[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        string n;
        int h, w;   
        cin >> n >> h >> w;
        info[i] = information(n, h, w);
    }

    sort(info, info + n, cmp);

    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    }


    return 0;
}