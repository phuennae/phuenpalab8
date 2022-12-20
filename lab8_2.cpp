#include <iostream>
#include <string>
using namespace std;

int main(){
    int stdID = 0;
    int std1 = stdID, n2 = stdID;
    string name;
    string movie;
    string day;
    string text;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> stdID;
    cin.ignore();
    while(stdID){
        n2 = std1;
        std1 = stdID;
        stdID /= 10;
    }
    cout << "Fahsai: I think you may be GEAR " << n2-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl; //<< name << ": ";
    getline(cin,movie);
    cout << name <<  ": Fahsai: So....which day are you free to go with me?" << endl << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
}