#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <limits>
#include <stack>
#define PI 3.14
using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

void decimalToOctal(int P_Input) {
    // Stack to store octal digits
    stack<int> octalDigits;
    
    // Convert decimal to octal
    while (P_Input > 0) {
        octalDigits.push(P_Input % 8);
        P_Input /= 8;
    }
}

string decimalToHexadecimal(int P_Input) {
    string hexadecimal = "";
    
    //array hex storage
    char hexadecimalDigits[] = "0123456789ABCDEF";
    
    // Convert decimal to hexadecimal
    while (P_Input > 0) {
        hexadecimal = hexadecimalDigits[P_Input % 16] + hexadecimal;
        P_Input /= 16;
    }
    
    return hexadecimal;
}

void CalcBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|----------              CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--  m    |                                                --|" << endl;
    cout << "\t\t\t\t\t|-- mode  |                                               ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        +        |           -          |         *       -|" << endl;
    cout << "\t\t\t\t\t|-    Addition     |      Subtraction     |  Multiplication -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        /        |           %          |        S        -|" << endl;
    cout << "\t\t\t\t\t|-    Division     |        Modulus       |     Square      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       C         |           P          |        L        -|" << endl;
    cout << "\t\t\t\t\t|-     Cube        |         Power        |     Logarithm   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       s         |          c           |        t        -|" << endl;
    cout << "\t\t\t\t\t|-      sin        |         cos          |       tan       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      r          |         p            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-   sqr root      |    programmer's      |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |      numerals        |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcAnswer (double &answer) {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                          -------------------------------|" << endl;
    cout << "\t\t\t\t\t|--   PROBLEM                 |                             -|" << endl;
    cout << "\t\t\t\t\t|-    ANSWER                  |" << answer << "                     -|" << endl;
    cout << "\t\t\t\t\t|--                           -------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        +        |           -          |         *       -|" << endl;
    cout << "\t\t\t\t\t|-    Addition     |      Subtraction     |  Multiplication -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        /        |           %          |        S        -|" << endl;
    cout << "\t\t\t\t\t|-    Division     |        Modulo        |     Square      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       C         |           P          |        L        -|" << endl;
    cout << "\t\t\t\t\t|-     Cube        |         Power        |     Logarithm   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       s         |          c           |        t        -|" << endl;
    cout << "\t\t\t\t\t|-      sin        |         cos          |       tan       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      r          |          f           |        F        -|" << endl;
    cout << "\t\t\t\t\t|-   sqr root      |        clear         |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void ProgResultOctal (string user_choice, int P_Input, int &result) {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--   Decimal                    "<<user_choice<<"         --|" << endl;
    cout << "\t\t\t\t\t|-    "<<P_Input<<"                     "<<oct<<P_Input<<"               -|" << endl;
    cout << "\t\t\t\t\t|--                                                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-     decimal     |      hexadecimal     |      binary     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-      octal      |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void ProgResultDecimal (string user_choice, int P_Input, int &result) {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--   Decimal                      "<<user_choice<<"         --|" << endl;
    cout << "\t\t\t\t\t|-    "<<P_Input<<"                "<<dec<<P_Input<<"               -|" << endl;
    cout << "\t\t\t\t\t|--                                                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-     decimal     |      hexadecimal     |      binary     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-      octal      |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void ProgResultHexadecimal (string user_choice, int P_Input, int &result) {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--   Decimal                      "<<user_choice<<"         --|" << endl;
    cout << "\t\t\t\t\t|-    "<<P_Input<<"                "<<hex<<P_Input<<"               -|" << endl;
    cout << "\t\t\t\t\t|--                                                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-     decimal     |      hexadecimal     |      binary     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-      octal      |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void ProgResultBinary (string &binary, string user_choice, int P_Input) {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--   Binary                       "<<user_choice<<"              --|" << endl;
    cout << "\t\t\t\t\t|-    "<<P_Input<<"                "<<binary<<"                   -|" << endl;
    cout << "\t\t\t\t\t|--                                                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-     decimal     |      hexadecimal     |      binary     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-      octal      |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcMode () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                        (modes)                         --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-   convertion    |          BMI         |       area of   -|" << endl;
    cout << "\t\t\t\t\t|-      mode       |                      |      triangle   -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |           5          |        6        -|" << endl;
    cout << "\t\t\t\t\t|-      area of    |        area of       |      area of    -|" << endl;
    cout << "\t\t\t\t\t|-      square     |       rectangle      |      circle     -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |          b           |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcModeCircle () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (circle)                         --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      1          |          2           |         3       -|" << endl;
    cout << "\t\t\t\t\t|-   area of       |      area of         |  circumference  -|" << endl;
    cout << "\t\t\t\t\t|-   circle (diam) |      circle (rad)    |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      4          |          5           |                 -|" << endl;
    cout << "\t\t\t\t\t|-   radius        |      diameter        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcModeTriangle () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                      (triangle)                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       1         |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-    area of      |       area of        |  two sides with -|" << endl;
    cout << "\t\t\t\t\t|-   triangle      |   triangle (3 sides) |    angle (SAS)  -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      4          |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|- two angles with |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-  side (ASA)     |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcModeRectangle () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                      (rectangle)                       --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      1          |          2           |         3       -|" << endl;
    cout << "\t\t\t\t\t|-   area of       |      perimeter       |     diagonal    -|" << endl;
    cout << "\t\t\t\t\t|-   rectangle     |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcModeSquare () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (square)                         --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       1         |          2           |         3       -|" << endl;
    cout << "\t\t\t\t\t|-    area of      |       diagonal       |  	perimeter  -|" << endl;
    cout << "\t\t\t\t\t|-    square       |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      4          |           5          |                 -|" << endl;
    cout << "\t\t\t\t\t|-  circumradius   |       inradius       |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CalcModeConvert () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                   (convertion modes)                   --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        l        |           w          |         T       -|" << endl;
    cout << "\t\t\t\t\t|-     length      |         weight       |   temperature   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ^        |           $          |        v        -|" << endl;
    cout << "\t\t\t\t\t|-      speed      |        currency      |      volume     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void LengthBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (Length)                         --|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |         .       -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	  centimeter   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void MeterBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                        (Meter)                         --|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |           k          |         .       -|" << endl;
    cout << "\t\t\t\t\t|-                 |    	kilometers       |    centimeter   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void KilometerBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                     (kilometers)                       --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |                      |         .       -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	                 | 	   centimeter  -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CentimeterBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                     (centimeters)                      --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       |  	           -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void MillimeterBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                     (millimeter)                       --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |         .       -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	   centimeter  -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-                 |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void MileBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (Mile)                           --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |        .        -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	 centimeter    -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |                      |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |                      |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void YardBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (Yard)                           --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |        .        -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	 centimeter    -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |                 -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void FootBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                        (Foot)                          --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |        .        -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	 centimeter    -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |           ]          |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |          inch        |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void InchBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                        (Inch)                          --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |           k          |         .       -|" << endl;
    cout << "\t\t\t\t\t|-     meter       |    	kilometers       | 	   centimeter  -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        ,        |           M          |        `        -|" << endl;
    cout << "\t\t\t\t\t|-    millimeter   |         mile         |       yard      -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       [         |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-     foot        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void WeightBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (Weight)                         --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        m        |         g            |  	   k       -|" << endl;
    cout << "\t\t\t\t\t|-  milligram (mg) |     gram (g)         |   kilogram(kg)  -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       t         |         p            |                 -|" << endl;
    cout << "\t\t\t\t\t|- metric ton (t)  |    pounds  (lbs)     |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void TemperatureBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                     (Temperature)                      --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        @        |          ~           |                 -|" << endl;
    cout << "\t\t\t\t\t|-   Celcius (°C)  |  Fahrenheit (°F)     |  	           -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void SpeedBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (Speed)                          --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       1           |       2            |        3 	   -|" << endl;
    cout << "\t\t\t\t\t|- meters per second | kilometers per hour|  miles per hour -|" << endl;
    cout << "\t\t\t\t\t|-     (m/s)         |   (km/h)           |    (mph)        -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       4           |        5           |        6        -|" << endl;
    cout << "\t\t\t\t\t|-      mach         |    km per second   |     lightspeed  -|" << endl;
    cout << "\t\t\t\t\t|-      (Ma)         |       (km/s)       |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       7           |         8          |                 -|" << endl;
    cout << "\t\t\t\t\t|-      Knot         |   Foot per second  |                 -|" << endl;
    cout << "\t\t\t\t\t|-                   |                    |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                   |                    |                 -|" << endl;
    cout << "\t\t\t\t\t|-                   |                    |                 -|" << endl;
    cout << "\t\t\t\t\t|-                   |                    |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                   |         b          |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                   |        back        |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                   |                    |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void CurrencyBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                      (currency)                        --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       1         |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-   U.S. Dollar   |  Australian Dollar   |        Euro     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      4          |           5          |         6       -|" << endl;
    cout << "\t\t\t\t\t|- British Pound   |   Philippine Peso    |   Kuwaiti Dinar -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      7          |          8           |         9       -|" << endl;
    cout << "\t\t\t\t\t|- Chinese Yuan    |    S. Korean Won     |   Japanese Yen  -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      !          |          @           |         #       -|" << endl;
    cout << "\t\t\t\t\t|-  U.A.E. Dirham  |   Canadian Dollar    |   Singaporean   -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |      Dollar     -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      %          |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-  Saudi Riyal    |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void ProgConvertBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--              (programming convertion)                  --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      dec        |         hex          |       bin       -|" << endl;
    cout << "\t\t\t\t\t|-     decimal     |      hexadecimal     |      binary     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-      oct        |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-     octal       |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

void VolumeBody () {
    cout << "\t\t\t\t\t|============================================================|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|---                                                      ---|" << endl;
    cout << "\t\t\t\t\t|--                      SCIENTIFIC                        --|" << endl;
    cout << "\t\t\t\t\t|-                       CALCULATOR                         -|" << endl;
    cout << "\t\t\t\t\t|--                       (volume)                         --|" << endl;
    cout << "\t\t\t\t\t|--                                                       ---|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        1        |           2          |         3       -|" << endl;
    cout << "\t\t\t\t\t|-   Cubic Meter   |         Cubic        |       Cubic     -|" << endl;
    cout << "\t\t\t\t\t|-                 |       Centimeter     |     Millimeter  -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-        4        |          5           |         6       -|" << endl;
    cout << "\t\t\t\t\t|-      Liter      |     Milliliter       |       Cubic     -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |       Foot      -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-       7         |          8           |         9       -|" << endl;
    cout << "\t\t\t\t\t|-     Cubic       |         Acre         |      Gallon     -|" << endl;
    cout << "\t\t\t\t\t|-     Yard        |         Foot         |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|-                 |         b            |        F        -|" << endl;
    cout << "\t\t\t\t\t|-                 |        back          |      exit       -|" << endl;
    cout << "\t\t\t\t\t|-                 |                      |                 -|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|============================================================|" << endl;
}

int main() {
    double Input1 = 0.0, Input2 = 0.0, answer = 0.0;
    char input = '\n';
    bool layout_switch = 0;
 	
    while (input != 'F') {
        if (layout_switch == 1) {
        	system ("cls");
            CalcAnswer (answer);
            cout << "Select your operation: ";
            cin >> input;

            if (input == '+' || input == '-' || input == '*' || input ==  '/' || input == '%' || input == 'S' || input == 'C' || input == 'P' || input == 'L')
            {

                Input1 = answer;

                cout << "Input Value: ";
                cin >> Input2;

            }

            else if (input == 'f' || input == 'F') {
            	system ("cls");
            }

            else {
                Input1 = answer;
            }
        }

        else {
        	CalcFront:
            CalcBody ();
            cout << "(Note: Press f to reset any operations.)" << endl;
            cout << "Select your operation: ";
            cin >> input;

            if (input == '+' || input == '-' || input == '*' || input ==  '/' || input == '%' || input == 'P' ) {

                cout << "Input Value: ";
                cin >> Input1;

                cout << "Input Value: ";
                cin >> Input2;

                layout_switch = 1;
            }
            
            else if (input == 'm') {
                
                ModeFront:
                
                system ("cls");
                CalcMode ();
                char OpInput = '\n';
                cout << "Select your operation: ";
                cin >> OpInput;
                
                //converter
                if (OpInput == '1') {
                    ConvertingFront:
                    
                    system ("cls");
                    CalcModeConvert ();
                    char ConvInput = '\n';
                    cout << "Select your operation: ";
                    cin >> ConvInput;
                    
                    //length
                    if (ConvInput == 'l') {
                    LengthFront:
                    
                    system ("cls");
                    LengthBody();

                    char L_OpInput = '\n';

                    cout << "Please select an operation: ";
                    cin >> L_OpInput;
                    
                    if (L_OpInput == '@') {
                        system ("cls");
                        MeterBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        switch (UnittoConv) {
                            case 'k':
                            answer = UserConv / 1000;
                            layout_switch = 1;
                            break;
                            
                            case '.':
                            answer = UserConv * 100;
                            layout_switch = 1;
                            break;
                            
                            case ',':
                            answer = UserConv * 1000;
                            layout_switch = 1;
                            break;
                            
                            case 'M':
                            answer = UserConv * 1609;
                            layout_switch = 1;
                            break;
                            
                            case '`':
                            answer = UserConv * 1.094;
                            layout_switch = 1;
                            break;
                            
                            case '[':
                            answer = UserConv * 3.281;
                            layout_switch = 1;
                            break;
                            
                            case ']':
                            answer = UserConv * 39.37;
                            layout_switch = 1;
                            break;
                            
                            case 'b':
                            goto LengthFront;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                        }
                    }
                    
                    else if (L_OpInput == 'k') {
                        system ("cls");
                        KilometerBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv * 1000;
                            break;
                            
                            case '.':
                            answer = UserConv * 100000;
                            break;
                            
                            case ',':
                            answer = UserConv * 1000000;
                            break;
                            
                            case 'M':
                            answer = UserConv / 1.609;
                            break;
                            
                            case '`':
                            answer = UserConv * 1094;
                            break;
                            
                            case '[':
                            answer = UserConv * 3281;
                            break;
                            
                            case ']':
                            answer = UserConv * 39370;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == '.') {
                        system ("cls");
                        CentimeterBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv / 100;
                            break;
                            
                            case 'k':
                            answer = UserConv / 100000;
                            break;
                            
                            case ',':
                            answer = UserConv * 10;
                            break;
                            
                            case 'M':
                            answer = UserConv / 160900;
                            break;
                            
                            case '`':
                            answer = UserConv / 91.44;
                            break;
                            
                            case '[':
                            answer = UserConv / 30.48;
                            break;
                            
                            case ']':
                            answer = UserConv / 2.54;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == ',') {
                        system ("cls");
                        MillimeterBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv / 1000;
                            break;
                            
                            case 'k':
                            answer = UserConv * 0.000001;
                            break;
                            
                            case '.':
                            answer = UserConv / 10;
                            break;
                            
                            case 'M':
                            answer = UserConv / 1,609,344;
                            break;
                            
                            case '`':
                            answer = UserConv / 914.4;
                            break;
                            
                            case '[':
                            answer = UserConv / 304.8;
                            break;
                            
                            case ']':
                            answer = UserConv / 25.4;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == 'M') {
                        system ("cls");
                        MileBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv * 1609;
                            break;
                            
                            case 'k':
                            answer = UserConv / 1.609;
                            break;
                            
                            case '.':
                            answer = UserConv * 160900;
                            break;
                            
                            case ',':
                            answer = UserConv * 1,609,344;
                            break;
                            
                            case '`':
                            answer = UserConv * 1760;
                            break;
                            
                            case '[':
                            answer = UserConv * 5280;
                            break;
                            
                            case ']':
                            answer = UserConv * 63360;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == '`') {
                        system ("cls");
                        YardBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv / 1.094;
                            break;
                            
                            case 'k':
                            answer = UserConv / 1094;
                            break;
                            
                            case '.':
                            answer = UserConv * 91.44;
                            break;
                            
                            case ',':
                            answer = UserConv * 914.4;
                            break;
                            
                            case 'M':
                            answer = UserConv / 1760;
                            break;
                            
                            case '[':
                            answer = UserConv * 3;
                            break;
                            
                            case ']':
                            answer = UserConv * 36;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == '[') {
                        system ("cls");
                        FootBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv / 3.281;
                            break;
                            
                            case 'k':
                            answer = UserConv / 3281;
                            break;
                            
                            case '.':
                            answer = UserConv * 30.48;
                            break;
                            
                            case ',':
                            answer = UserConv * 304.8;
                            break;
                            
                            case 'M':
                            answer = UserConv / 5280;
                            break;
                            
                            case '`':
                            answer = UserConv / 3;
                            break;
                            
                            case ']':
                            answer = UserConv * 12;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if (L_OpInput == ']') {
                        system ("cls");
                        InchBody ();
                        
                        double UserConv;
                        
                        char UnittoConv = '\n';
                        
                        cout << "Enter the number you want to convert: ";
                        cin >> UserConv;
                        
                        cout << "Select a unit to convert to: ";
                        cin >> UnittoConv;
                        
                        switch (UnittoConv) {
                            case '@':
                            answer = UserConv / 39.37;
                            break;
                            
                            case 'k':
                            answer = UserConv / 39370;
                            break;
                            
                            case '.':
                            answer = UserConv * 2.54;
                            break;
                            
                            case ',':
                            answer = UserConv * 25.4;
                            break;
                            
                            case 'M':
                            answer = UserConv / 63360;
                            break;
                            
                            case '`':
                            answer = UserConv / 36;
                            break;
                            
                            case '[':
                            answer = UserConv / 12;
                            break;
                            
                            default:
                            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
                            break;
                            
                        }
                        
                        layout_switch = 1;
                    }
                    
                    else if  (L_OpInput  == 'b') {
                        goto ConvertingFront;
                    }
                    
                    else if (L_OpInput == 'F'){
					}

                    else {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                }
                    
                    //weight
                    else if (ConvInput ==  'w')  {
                        WeightFront:
                    
                        system ("cls");
                        WeightBody();
                    
                        char W_OpInput = '\n';
    
                        cout << "Please select an operation: ";
                        cin >> W_OpInput;
                        
                        if (W_OpInput  == 'm') {
                            char UnittoConv = '\n';
                            double NumtoConv;
                            
                            cout << "Please select a unit to convert to: ";
                            cin >> UnittoConv;
                            
                            switch (UnittoConv) {
                                case 'g':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'k':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 't':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'p':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 453600;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'b':
                                goto WeightFront;
                                break;
                            }
                        }
                        
                        else if (W_OpInput == 'g') {
                            char UnittoConv = '\n';
                            double NumtoConv;
                            
                            cout << "Please select a unit to convert to: ";
                            cin >> UnittoConv;
                            
                            switch (UnittoConv) {
                                case 'm':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'k':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 't':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'p':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 453.6;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'b':
                                goto WeightFront;
                                break;
                            }
                        }
                        
                        else if (W_OpInput == 'k') {
                            char UnittoConv = '\n';
                            double NumtoConv;
                            
                            cout << "Please select a unit to convert to: ";
                            cin >> NumtoConv;
                            
                            switch (UnittoConv) {
                                case 'm':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 1000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'g':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 't':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'p':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 2.205;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'b':
                                goto WeightFront;
                                break;
                            }
                        }
                        
                        else if (W_OpInput == 't') {
                            char UnittoConv = '\n';
                            double NumtoConv;
                            
                            cout << "Please select a unit to convert to: ";
                            cin >> NumtoConv;
                            
                            switch (UnittoConv) {
                                case 'm':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'g':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 1000000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'k':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 1000;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'p':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 2205;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'b':
                                goto WeightFront;
                                break;
                            }
                        }
                        
                        else if (W_OpInput == 'p') {
                            char UnittoConv = '\n';
                            double NumtoConv;
                            
                            cout << "Please select a unit to convert to: ";
                            cin >> NumtoConv;
                            
                            switch (UnittoConv) {
                                case 'm':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 453600;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'g':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 453.6;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'k':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv / 2.205;
                                
                                layout_switch = 1;
                                break;
                                
                                case 't':
                                cout << "Please enter the number you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = NumtoConv * 2205;
                                
                                layout_switch = 1;
                                break;
                                
                                case 'b':
                                goto WeightFront;
                                break;
                            }
                        }
                        
                        else if (W_OpInput == 'b') {
                            goto ConvertingFront;
                        }
                        
                        else if (W_OpInput == 'F'){
						}
                        
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
                    }
                    
                    //temperature
                    else if (ConvInput == 'T') {
                    	
                    	
                        TemperatureFront:
                        
                        system ("cls");
                        TemperatureBody ();
                        
                        char T_OpInput = '\n';
                        cout << "Please select an operation: ";
                        cin >> T_OpInput;
                        
                        if (T_OpInput == '@') {
                            double NumtoConv;
                            char ConfirmationInput = '\n';
                            cout << "You have selected Celcius.";
                            cout << "Do you confirm to convert Celsius to Fahrenheit? Y/N" << endl;
                            cin >> ConfirmationInput;
                            
                            if (ConfirmationInput == 'Y' || ConfirmationInput == 'y') {
                                cout << "Enter the Celsius you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = (NumtoConv * 1.8) + 32;
                                
                                layout_switch = 1;
                            }
                            
                            else if (ConfirmationInput == 'N' || ConfirmationInput == 'n') {
                                goto TemperatureFront;
                            }
                        }
                        
                        else if (T_OpInput == '~') {
                            double NumtoConv;
                            char ConfirmationInput = '\n';
                            cout << "You have selected Fahrenheit.";
                            cout << "Do you confirm to convert Fahrenheit to Celsius? Y/N" << endl;
                            cin >> ConfirmationInput;
                            
                            if (ConfirmationInput == 'Y' || ConfirmationInput == 'y') {
                                cout << "Enter the Fahrenheit you want to convert: ";
                                cin >> NumtoConv;
                                
                                answer = (NumtoConv - 32) * 0.555555556;
                                
                                layout_switch = 1;
                            }
                            
                            else if (ConfirmationInput == 'N' || ConfirmationInput == 'n') {
                                goto TemperatureFront;
                            }
                        }
                        
                        else if (T_OpInput == 'b') {
                            goto ConvertingFront;
                        }
                        
                        else if (T_OpInput == 'F'){
						}
                   
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }

                    }
 
 					//speed
 					else if (ConvInput == '^') {
 						SpeedFront:
			    		system ("cls");
			    		SpeedBody ();
					    double answer = 0.0;
					    char S_OpInput = '\n';
					    cout << "Please select an operation: ";
					    cin >> S_OpInput;
					    
					    if (S_OpInput == '1') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //km/h
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 3.6;
					             layout_switch = 1;
					            
					            break;
					            
					            //m/h    
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 2.237;
					             layout_switch = 1;
					            
					            break;
					            
					            //Mach
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 343;
					             layout_switch = 1;
					            
					            break;
					            
					            //km/s    
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1000;
					             layout_switch = 1;
					            
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 299,792,458;
					             layout_switch = 1;
					            
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.944;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 3.281;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					    
					    else if (S_OpInput == '2') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 3.6;
					            layout_switch = 1;
					            break;
					            
					            //m/h    
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1.609;
					             layout_switch = 1;
					            break;
					            
					            //Mach
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1235;
					             layout_switch = 1;
					            break;
					            
					            //km/s    
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 3600;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            NumtoConv = NumtoConv * (3600 / 1000);
					            answer = NumtoConv * 299792458;
					             layout_switch = 1;
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 0.5399570136727677;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1.0972799983321;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					    
					    else if (S_OpInput == '3') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 2.237;
					            layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.609;
					             layout_switch = 1;
					            break;
					            
					            //Mach
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 767.3;
					             layout_switch = 1;
					            break;
					            
					            //km/s    
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 2237;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  0.0000000014912;
					             layout_switch = 1;
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1.151;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.467;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					        }
					    }
					    
					    else if (S_OpInput == '4') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 343;
					            layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1235;
					             layout_switch = 1;
					            break;
					            
					            //m/h
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 761.21;
					             layout_switch = 1;
					            break;
					            
					            //km/s    
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 0.34;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  0.0000011441;
					             layout_switch = 1;
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 666.7;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1125;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					        
					        else if (S_OpInput == '5') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1000;
					             layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 3600;
					             layout_switch = 1;
					            break;
					            
					            //m/h
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  3600000;
					             layout_switch = 1;
					            break;
					            
					            //Mach  
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 2.94;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv /  299800;
					             layout_switch = 1;
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1944;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 3281;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					        
					        else if (S_OpInput == '6') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 299792458;
					             layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1079252848.7999;
					             layout_switch = 1;
					            break;
					            
					            //m/h
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  670616629;
					             layout_switch = 1;
					            break;
					            
					            //Mach  
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 874030;
					             layout_switch = 1;
					            break;
					            
					            //km/s
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  299800;
					             layout_switch = 1;
					            break;
					            
					            //knot
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 582749918.3585;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 983571056;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					        
					        else if (S_OpInput == '7') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1.944;
					             layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.852;
					             layout_switch = 1;
					            break;
					            
					            //m/h
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv *  1852;
					             layout_switch = 1;
					            break;
					            
					            //Mach  
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 666.7;
					             layout_switch = 1;
					            break;
					            
					            //km/s
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv /  1944;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 582749918.3585;
					             layout_switch = 1;
					            break;
					            
					            //foot/second    
					            case '8':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.68;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					        
					        else if (S_OpInput == '8') {
					        char UnittoConv = '\n';
					        double NumtoConv;
					        
					        cout << "Please select a unit you want to convert to: ";
					        cin >> UnittoConv;
					
					        switch (UnittoConv) {
					            //m/s
					            case '1':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 3.281;
					             layout_switch = 1;
					            break;
					            
					            //km/h    
					            case '2':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1.097;
					             layout_switch = 1;
					            break;
					            
					            //m/h
					            case '3':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv * 1097;
					             layout_switch = 1;
					            break;
					            
					            //Mach  
					            case '4':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1125;
					             layout_switch = 1;
					            break;
					            
					            //km/s
					            case '5':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 3281;
					             layout_switch = 1;
					            break;
					            
					            //lightspeed
					            case '6':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 983571056.43045;
					             layout_switch = 1;
					            break;
					            
					            //knot   
					            case '7':
					            cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            answer = NumtoConv / 1.688;
					             layout_switch = 1;
					            break;
					            
					            case 'b':
					            goto SpeedFront;
					            break;
					                
					            default:
					            cout << "Invalid Input!";
					            break;
					            }
					        }
					        
					        else if (S_OpInput == 'b') {
								goto ConvertingFront;
							}
							
							else if (S_OpInput == 'F'){
							}
				
			                else {
			                    cin.clear();
			                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
			                }
			            }          
   
   					//currency
   					else if (ConvInput == '$') {
   							CurrencyFront:
   								
   							system ("cls");
   							CurrencyBody();
   							char MoneySelector = '\n', MoneytoConv = 'n';
   							double UserMoneyInput;
   							
   							cout << "Market Value is based off of rate in: 02/11/2024 | 2:26 P.M. UTC +08:00 " << endl;
   							cout << "Select your main currency: ";
   							cin >> MoneySelector;
   							
   							if (MoneySelector == '1') {
   								cout << "U.S.D." << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '2':
   										answer = UserMoneyInput * 1.53;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.93;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.79;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 56.07;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.31;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 7.11;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 1324.68;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 147.83;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 3.67;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 1.35;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 1.34;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 3.75;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							else if (MoneySelector == '2') {
   								cout << "A.U.D." << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.65;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.60;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.52;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 36.47;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.20;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 4.68;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 868.84;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 97.28;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 2.40;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.88;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.88;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 2.45;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							else if (MoneySelector == '3') {
   								cout << "Euro" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 1.08;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 1.65;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.85;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 60.25;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.33;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 7.74;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 1435.35;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 160.96;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 3.96;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 1.45;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 1.45;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 4.04;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							else if (MoneySelector == '4') {
   								cout << "Pound sterling" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 1.26;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 1.94;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 1.17;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 70.59;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.39;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 9.07;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 1681.60;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 188.39;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 4.64;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 1.70;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 1.70;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 4.74;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							else if (MoneySelector == '5') {
   								cout << "Philippine Peso" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.018;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.027;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.017;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.014;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.0055;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 0.13;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 23.82;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 2.67;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 0.066;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.024;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.024;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 0.067;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '6') {
   								cout << "Kuwaiti Dinar" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 3.25;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 4.98;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 3.02;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 2.58;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 181.52;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 23.32;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 4324.29;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 485.90;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 11.93;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 4.39;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 4.38;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 12.20;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '7') {
   								cout << "Chinese Yuan" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.14;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.22;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.13;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.11;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 7.85;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.043;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 185.45;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 20.97;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 0.52;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.19;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.19;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 0.53;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '8') {
   								cout << "South Korean Won" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.00075;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.0012;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.00070;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.00059;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 0.042;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.00023;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 0.0054;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 0.11;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 0.0028;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.0010;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.0010;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 0.0028;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '9') {
   								cout << "Japanese Yen" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.0067;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.010;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.0062;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.0053;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 0.37;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.0021;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 0.048;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 8.92;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 0.025;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.0090;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.0090;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 0.025;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '!') {
   								cout << "U.A.E Dirham" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.27;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.42;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.25;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput * 0.22;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput * 15.22;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.084;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 1.94;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 362.53;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 40.66;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.37;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.0090;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 1.02;
   										layout_switch = 1;
   										break;
   										
   									case 'b':
   										goto CurrencyFront;
   										break;
   										
   									default:
   										cout << "Invalid Input";
   										cin.clear();
            							cin.ignore(numeric_limits<streamsize>::max(), '\n');
            							break;
								   }
							   }
							   
							   else if (MoneySelector == '@') {
							   	cout << "Canadian Dollar" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.74;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 1.14;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.69;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput *0.59;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput *41.57;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.23;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 5.27;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 983.57;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 109.67;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 2.72;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 1.00;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 2.78;
   										layout_switch = 1;
   										break;
								   }
							   }
							   
							   else if (MoneySelector == '#') {
							   	cout << "Singaporean Dollar" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.74;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 1.14;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.69;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput *0.59;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput *41.57;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.23;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 5.27;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 983.57;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 109.67;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 2.72;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 1.00;
   										layout_switch = 1;
   										break;
   										
   									case '%':
   										answer = UserMoneyInput * 2.78;
   										layout_switch = 1;
   										break;
								   }
							   }
							   
							   else if (MoneySelector == '%') {
							   	cout << "Saudi Riyal" << endl;
   								cout << "In what currency do you want to convert to: ";
   								cin >> MoneytoConv;
   								cout << "Enter the amount you want to convert: ";
   								cin >> UserMoneyInput;
   								
   								switch (MoneytoConv) {
   									case '1':
   										answer = UserMoneyInput * 0.27;
   										layout_switch = 1;
   										break;
   										
   									case '2':
   										answer = UserMoneyInput * 0.41;
   										layout_switch = 1;
   										break;
   										
   									case '3':
   										answer = UserMoneyInput * 0.25;
   										layout_switch = 1;
   										break;
   										
   									case '4':
   										answer = UserMoneyInput *0.21;
   										layout_switch = 1;
   										break;
   										
   									case '5':
   										answer = UserMoneyInput *14.95;
   										layout_switch = 1;
   										break;
   										
   									case '6':
   										answer = UserMoneyInput * 0.082;
   										layout_switch = 1;
   										break;
   										
   									case '7':
   										answer = UserMoneyInput * 1.90;
   										layout_switch = 1;
   										break;
   										
   									case '8':
   										answer = UserMoneyInput * 353.64;
   										layout_switch = 1;
   										break;
   										
   									case '9':
   										answer = UserMoneyInput * 39.44;
   										layout_switch = 1;
   										break;
   										
   									case '!':
   										answer = UserMoneyInput * 0.98;
   										layout_switch = 1;
   										break;
   										
   									case '@':
   										answer = UserMoneyInput * 0.36;
   										layout_switch = 1;
   										break;
   										
   									case '#':
   										answer = UserMoneyInput * 0.36;
   										layout_switch = 1;
   										break;
								   }
							   }
					   
					   			else if (MoneySelector == 'b') {
					   				goto ConvertingFront;
								   }
								   
								   else if (MoneySelector == 'F'){
									}
					   			else {
					   				cout << "Invalid or Unknown Currency!";
					   				cin.clear();
                            		cin.ignore(numeric_limits<streamsize>::max(), '\n');
								   }
					   }
   					
   					//volume
   					else if (ConvInput == 'v') {
					        VolumeFront:
					        system("cls");
					        VolumeBody();
					        char V_OpInput = '\n';
					        
					        cout << "Please select an operation: ";
					        cin >> V_OpInput;
							//cubic meter
					        if (V_OpInput == '1') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            
					            switch (UnittoConv) {
					                // Cubic meter to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 1000000;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 1000000000;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to liter
					                case '4':
					                    answer = NumtoConv * 1000;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to mililiter
					                case '5':
					                    answer = NumtoConv * 1000000;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to cubic foot
					                case '6':
					                    answer = NumtoConv * 35.3147;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to cubic yard
					                case '7':
					                    answer = NumtoConv * 1.30795;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to acre foot
					                case '8':
					                    answer = NumtoConv * 0.000810714;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic meter to gallon
					                case '9':
					                    answer = NumtoConv * 264.172;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					         
					        else if (V_OpInput == '2') {
					             char UnittoConv = '\n';
					             double NumtoConv;
					
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
								cin >> NumtoConv;
					            switch (UnittoConv) {
					                // Cubic millimeter to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.000000001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to cubic centimeter
					                case '3':
					                    answer = NumtoConv * 0.001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to liter
					                case '4':
					                    answer = NumtoConv * 0.000001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to milliliter
					                case '5':
					                    answer = NumtoConv * 0.001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to cubic foot
					                case '6':
					                    answer = NumtoConv * 0.000000035315;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.00000000130795;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to acre foot
					                case '8':
					                    answer = NumtoConv * 8.1071e-13;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic millimeter to gallon
					                case '9':
					                    answer = NumtoConv * 0.00000026417;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					
					        else if (V_OpInput == '3') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					        
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            
					            switch (UnittoConv) {
					                // Cubic centimeter to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.000001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to cubic millimeter
					                case '2':
					                    answer = NumtoConv * 1000;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to liter
					                case '4':
					                    answer = NumtoConv * 0.001;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to mililiter
					                case '5':
					                    answer = NumtoConv;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to cubic foot
					                case '6':
					                    answer = NumtoConv * 0.0000353147;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.00000130795;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to acre foot
					                case '8':
					                    answer = NumtoConv * 8.10714e-10;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic centimeter to gallon
					                case '9':
					                    answer = NumtoConv * 0.000264172;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					        
					        else if (V_OpInput == '4') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					            
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
								cin >> NumtoConv;
								
					            switch (UnittoConv) {
					                // Liter to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.001;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 1000;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 1000000;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to milliliter
					                case '5':
					                    answer = NumtoConv * 1000;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to cubic foot
					                case '6':
					                    answer = NumtoConv * 0.0353147;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.00130795;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to acre foot
					                case '8':
					                    answer = NumtoConv * 0.000810714;
					                    layout_switch = 1;
					                    break;
					
					                // Liter to gallon
					                case '9':
					                    answer = NumtoConv * 0.264172;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					        
					        else if (V_OpInput == '5') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					             
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            
					            switch (UnittoConv) {
					                // Milliliter to cubic meter
					                case '1':
					                    
					                    answer = NumtoConv * 0.000001;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to cubic centimeter
					                case '2':
					                    answer = NumtoConv;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 1000;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to liter
					                case '4':
					                    answer = NumtoConv * 0.001;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to cubic foot
					                case '6':
					                    answer = NumtoConv * 0.000035315;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.000000130795;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to acre foot
					                case '8':
					                    answer = NumtoConv * 8.1071e-10;
					                    layout_switch = 1;
					                    break;
					
					                // Milliliter to gallon
					                case '9':
					                    answer = NumtoConv * 0.000264172;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					        
					        else if (V_OpInput == '6') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					            
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            
					            switch (UnittoConv) {
					                // Cubic foot to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.0283168;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 28316.8;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 2.8317e+7;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to liter
					                case '4':
					                    answer = NumtoConv * 28.3168;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to milliliter
					                case '5':
					                    answer = NumtoConv * 28316.8;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.037037;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to acre foot
					                case '8':
					                    answer = NumtoConv * 0.000022957;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic foot to gallon
					                case '9':
					                    answer = NumtoConv * 7.48052;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					        
					        else if (V_OpInput == '7') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
					
					        	cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            
					            switch (UnittoConv) {
					                // Cubic yard to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.764555;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 764554.858;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 7.64555e+8;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to liter
					                case '4':
					                    answer = NumtoConv * 764.555;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to milliliter
					                case '5':
					                    answer = NumtoConv * 764554.858;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to cubic foot
					                case '6':
					                    answer = NumtoConv * 27;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to acre foot
					                case '8':
					                    answer = NumtoConv * 0.000206612;
					                    layout_switch = 1;
					                    break;
					
					                // Cubic yard to gallon
					                case '9':
					                    answer = NumtoConv * 201.974;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					
					        else if (V_OpInput == '8') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					       
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            switch (UnittoConv) {
					                // Acre foot to cubic meter
					                case '1':
					                    answer = NumtoConv * 1233.48;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 1.2335e+9;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 1.2335e+12;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to liter
					                case '4':
					                    answer = NumtoConv * 1233480;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to milliliter
					                case '5':
					                    answer = NumtoConv * 1.2335e+9;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to cubic foot
					                case '6':
					                    answer = NumtoConv * 43560;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to cubic yard
					                case '7':
					                    answer = NumtoConv * 1614.011064;
					                    layout_switch = 1;
					                    break;
					
					                // Acre foot to gallon
					                case '9':
					                    answer = NumtoConv * 325851;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					        
					        else if (V_OpInput == '9') {
					            char UnittoConv = '\n';
					            double NumtoConv;
					            
					            cout << "Please select a unit you want to convert to: ";
					            cin >> UnittoConv;
								cout << "Please enter the number you want to convert: ";
					            cin >> NumtoConv;
					            switch (UnittoConv) {
					                // Gallon to cubic meter
					                case '1':
					                    answer = NumtoConv * 0.00378541;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to cubic centimeter
					                case '2':
					                    answer = NumtoConv * 3785.41;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to cubic millimeter
					                case '3':
					                    answer = NumtoConv * 3.78541e+6;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to liter
					                case '4':
					                    answer = NumtoConv * 3.78541;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to milliliter
					                case '5':
					                    answer = NumtoConv * 3785.41;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to cubic foot
					                case '6':
					                    answer = NumtoConv * 0.133681;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to cubic yard
					                case '7':
					                    answer = NumtoConv * 0.00495113;
					                    layout_switch = 1;
					                    break;
					
					                // Gallon to acre foot
					                case '8':
					                    answer = NumtoConv * 3.06888e-5;
					                    layout_switch = 1;
					                    break;
					
					                case 'b':
					                    goto VolumeFront;
					                    break;
					
					                default:
					                    cout << "Invalid Input!";
					                    break;
					            }
					        }
					
							else if (V_OpInput == 'b') {
								goto ConvertingFront;
							}
							
							else if (V_OpInput == 'F'){
							}
							
							else {
                    			cin.clear();
                    			cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    		}
					}


                    else if (ConvInput == 'b') {
                        goto ModeFront;
                    }
                    
                    else if (ConvInput == 'F'){
					}
                
					else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
				}
                
                //BMI
                else if (OpInput == '2') {
                	/**********
                	it's come to our realization that we haven't got the chance to explain it properly. Our calculator is only a replica of an actual scientific calculator-
                	-not a digital scientific calculator but the standard scientific calculator type, and we didn't add the Underweight to Obese III that time for that-
                	-particular reason. We believed that the actual scientific calculators won't display the BMI classifications and would just outright display the BMI-
                	-thus the lack of the BMI classification during our presentation. ***********/
                	
                    system ("cls");
                    int BMI_Age;
                    double BMI_Height, BMI_Weight, BMI;
                    
                    cout << "\t\t\t\t\t\t BMI Chart:\n" << "\t\t\t\t\t\t BMI < 18.5 = Underweight \n" << "\t\t\t\t\t\t BMI = 18.5 & < 25.0 = Healthy weight \n";
                    cout << "\t\t\t\t\t\t BMI = 18.5 & < 30.0 = Overweight \n" << "\t\t\t\t\t\t BMI = 30.0 & < 35.0 = Obese Class I \n";
                    cout << "\t\t\t\t\t\t BMI = 35.0 & < 40.0 = Obese Class II \n" << "\t\t\t\t\t\t BMI > 40.0 = Severe Obesity \n";
                    cout << "Enter your age: "; 
                    cin >> BMI_Age;
                    
                    cout << "Enter your height in inches (in): ";
                    cin >> BMI_Height;
                    
                    cout << "Enter your weight in pounds (lbs): ";
                    cin >> BMI_Weight;
                    
                    BMI = 703 * BMI_Weight / (pow (BMI_Height, 2));
        
                    answer = BMI;
                    
                    layout_switch = 1;
                }
                
                //triangle
                else if (OpInput == '3') {
                	TriangleFront:
                    system ("cls");
                    CalcModeTriangle ();
                    
                    int TriangleInput [2];
                    char TriangleOp =   '\n';
                    
                    cout << "Please select a triangle operation: ";
                    cin >> TriangleOp;
                    
                    if (TriangleOp == '1') {
                        cout << "To find the area you're looking for, please enter 2 sides:  \n";
                        cin >> TriangleInput [0] >> TriangleInput [1];
                       
                       if (TriangleInput[0] > 180 || TriangleInput[0] < 0 || TriangleInput[1] > 180 || TriangleInput[1] < 0) {
                           cout << "Invalid Triangle Input!";
                       } 
                       
                       else {
                        answer = TriangleInput[0] * TriangleInput[1] * 0.5;
                        
                        layout_switch = 1;
                        }
                    }
                    
                    else if (TriangleOp == '2') {
                        cout << "You have chosen SSS";
                        cout << "To find the area you're looking for, please enter 3 sides:  \n";
                        cin >> TriangleInput [0] >> TriangleInput [1] >> TriangleInput [2];
                        
                        if (TriangleInput[0] > 180 || TriangleInput[0] < 0 || TriangleInput[1] > 180 || TriangleInput[1] < 0 || TriangleInput [2] > 180 || TriangleInput [2] < 0) 
                         {
                           cout << "Invalid Triangle Input!";
                        }
                       
                       else {
                            answer = 0.25 * sqrt( (TriangleInput[0] + TriangleInput [1] + TriangleInput [2]) * ((-TriangleInput[0]) + TriangleInput [1] + TriangleInput [2]) * (TriangleInput[0] - TriangleInput [1] + TriangleInput [2]) * (TriangleInput[0] + TriangleInput [1] - TriangleInput [2]) );
                            layout_switch = 1;
                       }
                    }
                    
                    else if (TriangleOp == '3') {
                        cout << "You have chosen SAS";
                        cout << "To find the area you're looking for, please enter 2 sides and an Angle:  \n";
                        cout << "Please enter 2 sides: ";
                        cin >> TriangleInput [0] >> TriangleInput [1];
						cout << "Please enter the angle: ";
						cin >> TriangleInput [2];
                        
                        if (TriangleInput[0] > 180 || TriangleInput[0] < 0 || TriangleInput[1] > 180 || TriangleInput[1] < 0 || TriangleInput [2] > 180 || TriangleInput [2] < 0) 
                         {
                           cout << "Invalid Triangle Input!";
                        }
                       
                       else {
                            answer = 0.5 * TriangleInput [0] * TriangleInput [1] * sin(TriangleInput [2]);
                            layout_switch = 1;
                       }
                    }
                    
                    else if (TriangleOp == '4') {
                        cout << "You have chosen ASA";
                        cout << "To find the area you're looking for, please enter 2 Angles and a side:  \n";
                        cout << "Please enter 2 Angles: ";
                        cin >> TriangleInput [0] >> TriangleInput [1];
						cout << "Please enter the side: ";
						cin >> TriangleInput [2];
                        
                        if (TriangleInput[0] > 180 || TriangleInput[0] < 0 || TriangleInput[1] > 180 || TriangleInput[1] < 0 || TriangleInput [2] > 180 || TriangleInput [2] < 0) 
                         {
                           cout << "Invalid Triangle Input!";
                        }
                       
                       else {
                            answer = pow(TriangleInput[2],2) * sin (TriangleInput[0]) * sin (TriangleInput[1]) / (2 * sin (TriangleInput[0] + TriangleInput[1]));
                            layout_switch = 1;
                       }
                    }
                    
                    else if (TriangleOp == 'b') {
                    	goto ModeFront;
					}
                    
                    else {
                    		cout << "Invalid Input!";
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                       }
                }
                
                //square
                else if (OpInput == '4') {
                    char SquareInput = '\n';
                    double SquareInputVar;
                    system ("cls");
                    CalcModeSquare ();
                    
                    cout << "Please select a function of a square that you want to solve: ";
                    cin >> SquareInput;
                    
                    if (SquareInput == '1') {
                        cout << "To solve the area of a square, please enter a side: ";
                        cin >> SquareInputVar;
                        
                        if (SquareInputVar > 90 || SquareInputVar < 0) {
                        }
                        else {
                        answer = pow (SquareInputVar, 2);
                        
                        layout_switch = 1;
                        }
                    }
                    
                    else if (SquareInput == '2') {
                        cout << "To solve this area, please enter the diagonal value: ";
                        cin >> SquareInputVar;
                        
                        answer = pow (SquareInputVar, 2) / 2;
                        
                        layout_switch = 1;
                        
                    }
                    
                    else if (SquareInput == '3') {
                        cout << "To solve this area, please enter the perimeter: ";
                        cin >> SquareInputVar;   
                        
                        answer = pow (SquareInputVar, 2) / 16;
                        
                        layout_switch = 1;
                    }
                    
                    else if (SquareInput == '4') {
                        cout << "To solve this area, please enter the circumradius: \t\t(Take note: this function only takes values of 90 degrees and below.)" << endl;
                        cin >> SquareInputVar;
                        
                        if (SquareInputVar > 90 || SquareInputVar < 0) {
                        }
                        
                        else {
                        answer = pow (SquareInputVar, 2) * 2;
                        
                        layout_switch = 1;
                        }
                    }
                    
                    else if (SquareInput == '5') {
                        cout << "To solve this area, please enter the inradius: \t\t(Take note: this function only takes values of 90 degrees and below.)" << endl;
                        cin >> SquareInputVar;
                        
                        if (SquareInputVar > 90 || SquareInputVar < 0) {
                        }
                        
                        else {
                        answer = pow (SquareInputVar, 2) * 4;
                        
                        layout_switch = 1;
                        }
                    }
                    
                    else if  (SquareInput  == 'b') {
                        goto  ModeFront;
                    }
                     
                    else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                	}
                }
                
                //rectangle
                else if (OpInput == '5') {
                    system ("cls");
                    CalcModeRectangle ();
                    int RectangleInput;
                    double RectangleInputVar[1];
                    
                    cout << "Please select a function of a rectangle that you want to solve: ";
                    cin >> RectangleInput;
                    
                    if (RectangleInput == 1) {
                        cout << "To solve the area of a rectangle, please enter the base: ";
                        cin >> RectangleInputVar[0];
                        cout << "and the height: ";
                        cin >> RectangleInputVar[1];
                        
                        answer = RectangleInputVar[0] * RectangleInputVar[1];
                        
                        layout_switch = 1;
                    }
                    
                    else if (RectangleInput == 2) {
                        cout << "To solve the perimeter of a rectangle, please enter the base: ";
                        cin >> RectangleInputVar[0];
                        cout << "and the height: ";
                        cin >> RectangleInputVar[1];
                        
                        answer = (RectangleInputVar[0] + RectangleInputVar[1]) * 2;
                        
                        layout_switch = 1;
                    }
                    
                    else if (RectangleInput == 3) {
                        cout << "To solve the diagonal, please enter the base: ";
                        cin >> RectangleInputVar[0];
                        cout << "and the height: ";
                        cin >> RectangleInputVar[1];
                        
                        double diagonal = pow(RectangleInputVar[0], 2) + pow(RectangleInputVar[1], 2);
                        answer = sqrt (diagonal);
                        
                        layout_switch = 1;
                    }
                    
                    else if  (RectangleInput  == 'b') {
                        goto  ModeFront;
                    }
                    
                    else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                	}
                }
                
                //circle
                else if (OpInput == '6') {
                    system ("cls");
                    CalcModeCircle();
                    
                    int CircleInput;
                    double CircleInputVar;
                    
                    cout << "Please select a circle operation: ";
                    cin >> CircleInput;
                    
                    if (CircleInput == 1) {
                        cout << "To solve the area of a circle with a diameter, please enter the diameter: ";
                        cin >> CircleInputVar;
                        
                        answer = (pow((CircleInputVar / 2), 2)) * PI;
                        
                        layout_switch = 1;
                    }
                    
                    else if (CircleInput == 2) {
                        cout << "To solve the area of a circle with a radius, please enter the radius: ";
                        cin >> CircleInputVar;
                        
                        answer = (pow(CircleInputVar, 2)) * PI;
                        
                        layout_switch = 1;
                    }
                    
                    else if (CircleInput == 3) {
                        cout << "To find the circumference, please enter the area of a circle: ";
                        cin >> CircleInputVar;
                        
                        answer = (sqrt (CircleInputVar * PI)) * 2;
                        
                        layout_switch = 1; 
                    }
                    
                    else if (CircleInput == 4) {
                        cout << "To find the radius, please enter the area of a circle: ";
                        cin >> CircleInputVar;
                        
                        answer = sqrt (CircleInputVar / PI);
                        
                        layout_switch = 1;
                    }
                    
                    else if (CircleInput == 5) {
                        cout << "To find the diameter, please enter the area of a circle: ";
                        cin >> CircleInputVar;
                        
                        answer = 2 * sqrt (CircleInputVar / PI);
                        
                        layout_switch = 1;
                    }
                    
                    else if  (CircleInput  == 'b') {
                        goto  ModeFront;
                    }
                    
                    else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                	}
                }
                
                else if (OpInput == 'b' || OpInput == 'f') {
                	system ("cls");
                	goto CalcFront;
				}
				
                else if (OpInput == 'F') {
				}
				
                else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            else if (input == 'f' || input == 'F') {
            	
            }
            
            else if (input == 'p') {
            	system ("cls");
                        ProgConvertBody ();
    
                        int P_Input, result;
                        string user_choice;
                        
                    	cout << "\t\t\t\t\t\t Programming Numeral bases:\n" << "(Please enter the acronym for your choice.)\n" << "oct = Octal\n" << "dec = Decimal\n" << "hex = Hexadecimal\n" << "bin = Binary\n\n";
                        cout << "Enter the base of the number: ";
                        cin >> user_choice;

                    	result = P_Input;
                    	
                        if (user_choice == "oct") {
                            system ("cls");
            				cout << "Enter a number :       \t\t\t\t(Note: The number will be considered as decimal based.) \n";
                        	cin >> P_Input;
                        	
            				ProgResultOctal (user_choice, P_Input, result);
							decimalToOctal(P_Input);
							cout << "Number in octal: " <<oct<<P_Input;
                        } 
                        
                        else if (user_choice == "dec") {
                            system ("cls");
							cout << "Enter a number :       \t\t\t\t(Note: The number will be considered as decimal based.) \n";
                        	cin >> P_Input;
                        	
            				ProgResultDecimal (user_choice, P_Input, result);
            				cout << "Number in decimal: " << dec << result << endl;
                        } 
                        
                        else if (user_choice == "hex") {
                            system ("cls");
            				cout << "Enter a number :       \t\t\t\t(Note: The number will be considered as decimal based.) \n";
                        	cin >> P_Input;
                        	
        					ProgResultHexadecimal (user_choice, P_Input, result);
							decimalToHexadecimal(P_Input);
        					cout << "Number in hexadecimal: " << hex << result << endl;
                        } 
                        
                        else if (user_choice == "bin") {
                            system ("cls");
                            cout << "Enter a number :       \t\t\t\t(Note: The number will be considered as decimal based.) \n";
                        	cin >> P_Input;
                        	
            				string binary = decimalToBinary(P_Input);
            				ProgResultBinary (binary, user_choice, P_Input);
            				
            				cout << "Number in binary: " << binary << endl;
                        } 
                        
                        else if (user_choice == "b" || user_choice == "f") {
                        	system ("cls");
                            goto CalcFront;
						}
						
						else if (user_choice == "F") {
						}
						
						else {
                    		cin.clear();
                   			 cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
			}

            else {
                cout << "Input Value: ";
                cin >> Input1;
                layout_switch = 1;
            }
        }

        switch (input) {
        case '+':
            answer = Input1 + Input2;
            layout_switch = 1;
            break;

        case '-':
            answer = Input1 - Input2;
            layout_switch = 1;
            break;

        case '*':
            answer = Input1 * Input2;
            layout_switch = 1;
            break;

        case '/':
            answer = Input1 / Input2;
            layout_switch = 1;
            break;
            
        case '%':
            answer = int (Input1) % int (Input2);
            layout_switch = 1;
            break;

        case 'S':
            answer = pow (Input1, 2);
            layout_switch = 1;
            break;

        case 'C':
            answer = pow (Input1, 3);
            layout_switch = 1;
            break;

        case 'P':
            answer = pow (Input1, Input2);
            layout_switch = 1;
            break;

        case 'L':
            answer = log (Input1);
            layout_switch = 1;
            break;

        case 's':
            answer = sin (Input1);
            layout_switch = 1;
            break;

        case 'c':
            answer = cos (Input1);
            layout_switch = 1;
            break;

        case 't':
            answer = tan (Input1);
            layout_switch = 1;
            break;

        case 'r':
            answer = sqrt (Input1);
            layout_switch = 1;
            break;
            

        case 'f':
        	system ("cls");
            layout_switch = 0;
            break;

        case 'F':
            break;

        default:
            cout << "\t\t\t\t\t~~~~~ Syntax Error ~~~~" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
    return 0;
}
