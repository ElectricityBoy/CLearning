//Including libraries
#include <stdio.h>
#include <iostream>

// help the progra to recognize the comands cout, cin..
using namespace std;


int main()
{
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary/12;
    cout << "Your mothly salary is " << monthlySalary << endl; // output the console
    cout << "If you keep your annual salary safe, in two years you gonna have " << annualSalary*2 ; // writing the output as another form

    char character = 'z';
} 