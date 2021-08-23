#include <iostream>
using namespace std;

int main()
{
    //we use the switch statement to switch values in the variable who can be assumed diferent values
   float num1, num2;
   char operation;
   cout << "CodeBeaty Calculator" << endl;
   cin >> num1 >> operation >> num2;

   switch (operation)
   {
       case '-': cout << num1 << operation << num2 << " = " << num1 - num2 << endl; break;
       // if you dont put a break statement in the switch statement, you will get an infinite loop
       case '+': cout << num1 << operation << num2 << " = " << num1 + num2 << endl; break;
       case '*': cout << num1 << operation << num2 << " = " << num1 * num2 << endl; break;
       case '/': cout << num1 << operation << num2 << " = " << num1 /  num2 << endl; break;
       case '%': 
            bool isNum1int, isNum2int ;
            isNum1int = ((int)num1 == num1);
            isNum2int = ((int)num2 == num2);

            if(isNum1int  && isNum2int )
            {
                cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2 << endl;
            }
            else
            {
                cout << " Not invalid";
            }
            break;
        case 'a': cout << "Vai estudar vagabundo";
        // we put  default argument to define what happens if the user not put what is expected
        default: cout << "Try again" << endl;
            

   }
   
}