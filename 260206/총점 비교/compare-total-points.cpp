#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student{
    public:
        string name;
        int kor,eng,math;

        student(string name, int kor, int eng, int math) {
            this->name =name;
            this->kor =kor;
            this->eng =eng;
            this->math =math;
        }
        student(){}

};

bool cmp(student a, student b) {
    return a.kor+a.eng+a.math < b.kor+b.eng+b.math;
}

int main() {

    int n;
    cin >> n;

    student students[n];

    string name;
    int kor,eng,math;

    for(int i=0;i<n;i++) {
        cin >> name >> kor >> eng >> math;
        students[i] = student(name,kor,eng,math);
    }
    sort(students,students+n,cmp);

    for(int i=0;i<n;i++) {
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << endl;
    }

    return 0;
}
