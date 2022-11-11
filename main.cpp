// Brandon Newton J00610524 11/9/2022
// Due Wednesday November 9, 2022
// Roots of the quadratic equation p259

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a;
  double b;
  double c;
  double X1;
  double X2;
  double discriminant;

  cin >> a >> b >> c;

  discriminant = pow(b, 2) - (4 * a * c);
  X1 = (-b + sqrt(discriminant))/(2*a);
  X2 = (-b - sqrt(discriminant))/(2*a);

  if (2*a == 0)
    cout<< "Invalid Entry ";
  else
  {
      if (discriminant == 0){
        cout << "The single root is "<< X1 << endl;
      }  

      else if(discriminant > 0){
        cout << "Two real roots\n";
        cout <<"- First root " << X1 << "\n";
      
        cout <<"- Second root " << X2 << "\n";
      }

      else if (discriminant <0) {
        cout << "Complex roots\n";
    }
    }
}
