#include<iostream>

using namespace std;
int main(){
    string time;
    cin>>time;

    int hour = ((time[0]-'0') *10) + (time[1]-'0');
    string spyke =time.substr( 8 , 2);
  cout<<hour<<endl;
    if(spyke=="PM" && hour != 12){
        hour = hour + 12;
        string temp = to_string(hour);

        time[0] = temp[0];
        time[1] = temp[1];
    }
    else if(spyke=="AM" && hour == 12){
        time[0] = '0';
        time[1] = '0';
    }

    cout<<time.substr(0 , 8);


}