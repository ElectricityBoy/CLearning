#include <iostream>
using namespace std;
//This program is to show another aplication with switch statement. It used to concatenate multiple switchs as many ifs/elses
int main()
{
   float value1,value2,value3;
   cin >> value1 >> value2 >> value3;

   int percentage = ((value1 + value2 + value3)/3)*10;

   switch (percentage>=60)
   {
   case 1:
        cout << "BYE BYE SEMESTER" << endl;break;
       break;
       case 0: switch (percentage<60)
            {
                case 1: cout << "U ARE A SHIT"<< endl;
                break;
            }
   }

}