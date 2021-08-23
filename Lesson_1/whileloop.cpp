#include <iostream>
using namespace std;

int main()
{
    //the program will interate one up to 500 in our counter variable and show what number is divisible by five and three
   int counter = 100;
   while (counter< 500)
   {
       if (counter< 500)
        {
            counter= counter +1;
            if (counter%3 == 0 and counter%5 == 0)
            {
                cout <<  counter << " , ";
            }
        }
        
   }
   
   
}