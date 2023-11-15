#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{

    cout.setf(ios::uppercase); // selected characters will be displayed in uppercase.
    double num = 2e12;
    cout << num << endl;

    // cout.unsetf(ios::dec); // clear other flags to display in specific format.

    // ios::basefield : clears the all the flags of decimal octal and hex then new flag is set
    // basefield flags (i.,e., dec, oct, and hex) are first cleared and then the hex flag is set
    // decimal value can be displayed in octal hexadecimal or decimal format by setting flags.
    cout.setf(ios::hex, ios::basefield);
    int n = 255;
    cout << n << endl;

    cout.setf(ios::boolalpha); // when boolean is printed it prints the string value instead of 0/1 .
    cout << true << endl;

    cout.width(10);    // width of the output will be >=10 (total length of all characters).
    cout.fill('*');    // if width is less it will be filled by this character specified.
    cout.precision(5); // for floating point number this number of digits will be displayed (total count of digits).

    float number = 13.234221;
    cout << number << " hello world" << endl;
    cout.unsetf(ios::uppercase);

    // this will print the defined digits after the decimal point
    cout << fixed << setprecision(4) << number << endl;

    // int c = (1, 2, 3);    //...calculations done from left to right
    // cout<<c;       //rightmost value is assigned to the variable

    return 0;
}

/*

basic_streambuf         streambuf        wstreambuf
basic_ios               ios              wios
basic_istream           istream          wistream
basic_ostream           ostream          wostream
basic_iostream          iostream         wiostream
basic_fstream           fstream          wfstream
basic_ifstream          ifstream         wifstream
basic_ofstream          ofstream         wofstream
*/

/*
formatting using ios members :
adjustfield      basefield       boolalpha       dec
fixed            floatfield      hex             internal
left             oct             right           scientific
showbase         showpoint       showpos         skipws
unitbuf          uppercase
*/