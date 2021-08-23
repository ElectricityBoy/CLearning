#include <iostream>
using namespace std;

int main()
{
   // To swapping values in C++ we need to use a temporary variable to save the value and swapping the other variables
   // For exampel

   int a = 20;
   int b = 100;
   int tem = a;
   a = b;
   b = tem;
   cout << a << " , " << b << endl;

   // We also can use another way to solve the problem

   a = a + b ;
   b = a - b;
   a  = a - b;
   cout << a << " , " << b << endl;
   
}