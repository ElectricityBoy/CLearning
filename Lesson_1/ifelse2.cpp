 #include <iostream>
 using namespace std;

 int main()
 {
     float a,b,c;
     cout<< "Digite o valor de um lado: " ;
     cin >> a;
     cout<< "Digite o valor de um lado: " ;
     cin >> b;
     cout<< "Digite o valor de um lado: " ;
     cin >> c;

     //conditional structure to compare if each element is equal or different to be equiateral, isoceles or scalene triangle
     //the argument not working as python works. This statement needs to be especificified each equivalency or diference by using the operators && to and or || to or
     if (a==b && b==c)
     {
        cout<< "The triangle is Equilateral" << endl;
     }
     else if ((a==b) && a!=c || (b==c) && b!=a)
     {
        cout<< "The triangle is isoceles"<< endl;
     }
     else
     {
        cout<< "The triangle is Scalene" << endl;
     }
    

 }