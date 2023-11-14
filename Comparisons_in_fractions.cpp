#include <iostream>
#include <math.h>

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }

    double Abs() { return sqrt(numerator_ * numerator_ + denominator_ * denominator_); }

    bool operator== (Fraction right) {
        return Abs() == right.Abs();
    }

    bool operator!= (Fraction right) {
        return !(*this == right);
    }

    bool operator< (Fraction right) {
        return Abs() < right.Abs();;
    }

    bool operator> (Fraction right) {
        return right < *this;
    }

    bool operator<= (Fraction right) {
        return !(*this > right);
    }
    bool operator>= (Fraction right) {
        return !(*this < right);
    }
};

int main()
{
    setlocale(LC_ALL, "russian");
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
    
}
