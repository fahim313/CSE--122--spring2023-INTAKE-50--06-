
#include <iostream>
#include <cassert>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d) {
        assert(d != 0 && "Error: Denominator cannot be zero");
        assert((typeid(n).name() == typeid(int).name()) && (typeid(d).name() == typeid(int).name()) && "Error: Numerator and denominator must be integers");
        numerator = n;
        denominator = d;
    }
    void reduce() {
        int n = numerator;
        int d = denominator;

        while (d != 0) {
            int t = d;
            d = n % d;
            n = t;
        }
        numerator /= n;
        denominator /= n;
    }
    string toString() const {
        return to_string(numerator) + "/" + to_string(denominator);
    }
    Fraction operator+(const Fraction& other) const {
        int n = (numerator * other.denominator) + (denominator * other.numerator);
        int d = denominator * other.denominator;

        Fraction result(n, d);
        result.reduce();
        return result;
    }
};
int main() {
    int n1, n2, d1, d2;
    cout << "Enter numerator and denominator for fraction 1: ";
    cin >> n1 >> d1;
    cout << "Enter numerator and denominator for fraction 2: ";
    cin >> n2 >> d2;
    Fraction f1(n1, d1);
    Fraction f2(n2, d2);
    Fraction sum = f1 + f2;
    cout << f1.toString() << " + " << f2.toString() << " = " << sum.toString() << endl;

    return 0;
}
