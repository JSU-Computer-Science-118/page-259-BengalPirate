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
  double X_1;
  double X_2;
  double discriminant;

  cin >> a >> b >> c;

  discriminant = pow(b, 2) - (4 * a * c);
  X_1 = (-b + sqrt(discriminant))/(2*a);
  X_2 = (-b - sqrt(discriminant))/(2*a);

  if (discriminant == 0){
    cout << "The single root is "<< X_1 << endl;
  }

  else if(discriminant > 0){
    cout << "Two real roots\n";
    cout <<"- First root " << X_1 << "\n";
    cout <<"- Second root " << X_2 << "\n";
  }

  else if (discriminant < 0) {
    cout << "Complex roots\n";
  }
  
}
