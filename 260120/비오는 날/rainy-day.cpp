#include <iostream>
#include <string>
using namespace std;

class weather {
    public:
        string day,week,wea;
        int days[3];

        weather(){}

        weather(string day, string week, string wea){
            this->day=day;
            this->week =week;
            this->wea =wea;

            days[0] = stoi(day.substr(0,4));
            days[1] = stoi(day.substr(5,2));
            days[2] = stoi(day.substr(8,2));

        }



};

int main() {
    int n;
    cin >> n;
    weather weathers[n];
    string day,week,wea;

    for(int i=0;i<n;i++) {
        cin >> day  >>week >> wea;
        weathers[i] = weather(day, week, wea);
    }

    int rainindex=0;

    for(int i=0;i<n;i++) {
        if(weathers[i].wea == "Rain") rainindex=i;
    }
    for(int i=0;i<n;i++) {
        if(weathers[i].wea == "Rain"){
            if(weathers[i].days[0] < weathers[rainindex].days[0]) rainindex =i;
            else if(weathers[i].days[0] == weathers[rainindex].days[0]) {
                if(weathers[i].days[1] < weathers[rainindex].days[1]) rainindex=i;
                else if(weathers[i].days[1] == weathers[rainindex].days[1]) {
                    if(weathers[i].days[2] < weathers[rainindex].days[2]) rainindex=i;
            }
        }
        }
        
    }
    cout << weathers[rainindex].day <<" " << weathers[rainindex].week << " " << weathers[rainindex].wea;

    return 0;
}