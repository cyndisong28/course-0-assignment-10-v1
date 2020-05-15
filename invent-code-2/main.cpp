#include <iostream>
#include <string>
using namespace std;

struct Fraction{
  int denominator;
  int numerator;
};

Fraction CreatFraction() {
Fraction a;
cout << "what is your numerator?";
cin >> a.numerator;
cout << "what is your denominator?";
cin >> a.denominator;
return a;
}

int GreatCommonFactor(int num1, int num2) {
  for (int i = num1; i > 1; i--) {
    if ((num1 % i == 0) && (num2 % i == 0)) {
      return i;
    }
  }
  return 1;
}

int main() {
  // Write code here.
  Fraction a = CreatFraction();
  cout << "Fraction = " << a.numerator << "/" << a.denominator << endl;

  int gcf = GreatCommonFactor(a.numerator, a.denominator);
  int simplified_numerator = a.numerator / gcf;
  int simplified_denominator = a. denominator / gcf;
  cout << "Simplified form = " << simplified_numerator << "/" << simplified_denominator;
}
