#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// class 이용
// class people{
//     public:
//         string name;
//         int height,weight;

//         people(string name,int height, int weight) {
//             this->name =name;
//             this->height=height;
//             this->weight=weight;
//         }
//         people(){}

       
// };

// bool cmp(people a, people b) {
//         return a.height < b.height;
//     }


// int main() {
    
//     int n;
//     cin >>n;
//     people peoples[n];
    
//     string name;
//     int height,weight;

//     for(int i=0;i<n;i++) {
//         cin >> name >> height >> weight;
//         peoples[i] = people(name,height,weight);
//     }

//     sort(peoples,peoples+n,cmp);

//     for(int i=0;i<n;i++) {
//         cout << peoples[i].name << " " << peoples[i].height << " " << peoples[i].weight << endl;
//     }

//     return 0;
// }

//tuple 이용



int main() {
    int n;
    cin >> n;

    tuple<int,string,int> p[n];
    string name;
    int height,weight;

    for(int i=0;i<n;i++) {
        cin >> name>>height>>weight;
        p[i]= make_tuple(height,name,weight);
    }
    
    sort(p, p+n);

    for(int i=0;i<n;i++) {
        tie(height,name,weight) = p[i];
        cout << name << " " << height << " " <<weight << endl;
    }
    return 0;
}