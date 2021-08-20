#include <iostream>
using namespace std;

int main()
{
    /* 
    representation of a ascii character as a number
    these are two different forms to do 
        cout << (int)'E' << endl;
        cout << int('e') << endl;
    we can also represent numbers as character
        cout << char(69) << endl; 
    */
    //fun programming
    string msg;
    int crypt;
    char letter;

    cin >> msg;
    for (int i = 0; i < msg.size(); i++){
            letter = msg[i];
            cout << int(letter) << " ";
    }
}