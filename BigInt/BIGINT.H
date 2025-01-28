#include <string>
using namespace std;

string increment_digit_string(const string &);
string sum_common_len_digit_strs(const string&, const string&);

class BigInt 
{
    bool is_neg;
    string digits;

    public:

    BigInt();
    Bigint(int);
    Bigint(string);

    string to_string() const;
    bool operator==(const BigInt&) const;
    bool operator>(const BigInt&) const;
    bool operator!=(const BigInt&) const;
    bool operator<=(const BigInt&) const;
    bool operator<(const BigInt&) const;
    bool operator>=(const BigInt&) const;
    BigInt operator+(const BigInt&) const;
}