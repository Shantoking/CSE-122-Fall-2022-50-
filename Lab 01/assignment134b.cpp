
#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
class Fraction {
private:
int numerator;
int denominator;
public:
Fraction(int numerator, int denominator)
{
   assert(denominator != 0 && "Denominator can't be zero!");
assert((typeid(numerator) == typeid(int)) && (typeid(denominator) == typeid(int)) &&
"Numerator and denominator must be integers!");
this->numerator = numerator;
this->denominator = denominator;
}
void reduce() {
int gcd = gcd(numerator, denominator);
numerator /= gcd;
denominator /= gcd;
}
string str() const {

return to_string(numerator) + "/" + to_string(denominator);
}
friend ostream& operator<<(ostream& os, const Fraction& fraction) {
os << fraction.str();
return os;
}
Fraction operator+(const Fraction& other) const {
int num = numerator * other.denominator + other.numerator * denominator;
int denom = denominator * other.denominator;
Fraction result(num, denom);
result.reduce();
return result;
}
};
int main() {
Fraction a(3, 4);
Fraction b(1, 2);
Fraction c = a + b;
cout << "a: " << a << endl;
cout << "b: " << b << endl;
cout << "c: " << c << endl;
getch();
}

