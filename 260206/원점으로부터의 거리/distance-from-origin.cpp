#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

class dis {
    public:
        int x,y,num;

        dis(int x,int y,int num){
            this->x=x;
            this->y=y;
            this->num=num;
        }
        dis(){}
};

bool cmp(dis a, dis b) {

    a.x =abs(a.x);
    a.y = abs(a.y);
    b.x =abs(b.x);
    b.y = abs(b.y);
    if( a.x+a.y == b.x+b.y) return a.num < b.num;
    return a.x+a.y <b.x+b.y;
}


int main() {

    int n;
    cin >> n;

    dis distances[n];
    int x,y;
    
    for(int i=0;i<n;i++) {
        cin >> x>>y;
        distances[i] =dis(x,y,i+1);
    }

    sort(distances,distances+n,cmp);

    for(int i=0;i<n;i++) {
       cout << distances[i].num << endl;
    }

   
    return 0;
}

