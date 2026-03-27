#include <iostream>
#include <algorithm>
using namespace std;

class information{
    public:
        string name;
        int height;
        double weight;
        information() { }
        information(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cpn(information a, information b){
    return a.name < b.name;
}

bool cph(information a, information b){
    return a.height > b.height;
}

int main() {
    information info[5];

    for(int i = 0; i < 5; i++){
        string n;
        int h;
        double w;
        cin >> n >> h >> w;
        info[i] = information(n, h, w);
    }

    cout << fixed;
    cout.precision(1);

    sort(info, info + 5, cpn);

    cout << "name" << endl;
    for(int i = 0; i < 5; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    }
    cout << endl;

    sort(info, info + 5, cph);

    cout << "height" << endl;
    for(int i = 0; i < 5; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    }
    return 0;
}
