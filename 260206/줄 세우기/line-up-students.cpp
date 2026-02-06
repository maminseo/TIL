#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student{
    public:
        int height,weight,num;

        student(int height, int weight,int num) {
            this->height =height;
            this->weight =weight;
            this->num = num;
        }
        student(){}

};

bool cmp(student a, student b) {
    if(a.height == b.height) {
        if(a.weight == b.weight) return a.num < b.num;
        return a.weight > b.weight;
    }
    
    return a.height > b.height;
}

int main() {

    int n;
    cin >> n;

    student students[n];

    int height,weight,num;

    for(int i=0;i<n;i++) {
        cin >> height >> weight;
        students[i] = student(height,weight,i+1);
    }

    sort(students,students+n,cmp);

    for(int i=0;i<n;i++) {
       cout << students[i].height << " " << students[i].weight << " " << students[i].num << endl;
    }
    return 0;
}


