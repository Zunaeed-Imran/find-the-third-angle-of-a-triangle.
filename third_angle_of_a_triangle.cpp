#include <iostream> 

using namespace std;

int main () {
  int a, b, c;

  cout << "Enter the value of A ";
  cin >> a;
  cout << "Enter the value of B ";
  cin >> b;

  c = 180 - (a + b) ;

  cout << "The Third Angle is: " << c << endl;


  return 0;
}
