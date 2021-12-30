#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <math.h>
#include <ctype.h>
#include <climits>

#define M_PI 3.14159265358979323846
using namespace std;

double addition(double first, double second)
{
    double result = first + second;
    return result;
}
double subtraction(double first, double second)
{
    double result = first - second;
    return result;
}
double multiply(double first, double second)
{
    double result = first * second;
    return result;
}

double division(double first, double second)
{
    double result = first / second;
    return result;
}

double percentage(double value, double totalValue)
{
    double result = (value / totalValue) * 100;
    return result;
}
float sine(float number)
{

    float result = sin(number);
    return result;
}

float cosine(float number)
{
    float result = cos(number);
    return result;
}
float tangent(float number)
{
    float result = tan(number);
    return result;
}

double squareRoot(double x)
{
    double result = sqrt(x);
    return result;
}

double logarithm(double x)
{
    double result = log(x);
    return result;
}

double exponent(double first, double second)
{
    double result = pow(first, second);
    return result;
}

float pi(float number)
{
    float result = number * M_PI;
    return result;
}

void calculator()
{
    cout << "You can choose from a varierty of mathematical formulas." << endl;
    char op;
    cout << "Choose one of the formulas: +, -, *, /, %, l(log), s(sin), c(cos), t(tan), p(pi), e(exponent), r(square root): ";
    cin >> op;

    switch (op)
    {
    case '+':
        double addFirst;
        cout << "Enter the first number: ";
        cin >> addFirst;
        double addSecond;
        cout << "Add by: ";
        cin >> addSecond;
        if (!isdigit(addFirst && !isdigit(addSecond))) // checks if given inputs are numbers
        {

            cout << addFirst << " + " << addSecond << " is: " << addition(addFirst, addSecond) << endl;
        }

        while (cin.fail()) // in case given input is not a number
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter the first number: ";
            cin >> addFirst;
            cout << "Add by: ";
            cin >> addSecond;
            cout << addFirst << " + " << addSecond << " is: " << addition(addFirst, addSecond) << endl;
        }

        break;
    case '-':
        double subFirst;
        cout << "Enter the first number: ";
        cin >> subFirst;
        double subSecond;
        cout << "Subtract by: ";
        cin >> subSecond;
        if (!isdigit(subFirst) && !isdigit(subSecond))
        {
            cout << subFirst << " - " << subSecond << " is: " << subtraction(subFirst, subSecond) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter the first number: ";
            cin >> subFirst;
            cout << "Subtract by: ";
            cin >> subSecond;
            cout << subFirst << " - " << subSecond << " is: " << subtraction(subFirst, subSecond) << endl;
        }

        break;
    case '*':
        double multiFirst;
        cout << "Enter the first number: ";
        cin >> multiFirst;
        double multiSecond;
        cout << "Multiply by: ";
        cin >> multiSecond;
        if (!isdigit(multiFirst) && !isdigit(multiSecond))
        {
            cout << multiFirst << " * " << multiSecond << " is: " << multiply(multiFirst, multiSecond) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter the first number: ";
            cin >> multiFirst;
            cout << "Multiply by: ";
            cin >> multiSecond;
            cout << multiFirst << " * " << multiSecond << " is: " << multiply(multiFirst, multiSecond) << endl;
        }
        break;
    case '/':
        double divFirst;
        cout << "Enter the first number: ";
        cin >> divFirst;
        double divSecond;
        cout << "Divided by: ";
        cin >> divSecond;
        if (!isdigit(divFirst) && !isdigit(divSecond))
        {
            cout << divFirst << " / " << divSecond << " is: " << division(divFirst, divSecond) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter the first number: ";
            cin >> divFirst;
            cout << "Divided by: ";
            cin >> divSecond;
            cout << divFirst << " / " << divSecond << " is: " << division(divFirst, divSecond) << endl;
        }
        break;
    case '%':
        cout << "Percentage is calculated with the following formula: (value / total value) * 100" << endl;
        double perFirst;
        cout << "Enter value: ";
        cin >> perFirst;
        double perSecond;
        cout << "Enter the total value: ";
        cin >> perSecond;
        if (!isdigit(perFirst) && !isdigit(perSecond))
        {
            cout << "(" << perFirst << " / " << perSecond << ") * 100 is: " << percentage(perFirst, perSecond) << "%" << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter value: ";
            cin >> perFirst;
            cout << "Enter the total value: ";
            cin >> perSecond;
            cout << "(" << perFirst << " / " << perSecond << ") * 100 is: " << percentage(perFirst, perSecond) << "%" << endl;
        }
        break;
    case 's':
    case 'S':
        cout << "Returns the sine of angle given in radians." << endl;
        float sin;
        cout << "Enter number: ";
        cin >> sin;
        if (!isdigit(sin))
        {
            cout << "The result of sin(" << sin << ") is: " << sine(sin) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> sin;
            cout << "The result of sin(" << sin << ") is: " << sine(sin) << endl;
        }
        break;
    case 'c':
    case 'C':
        cout << "Returns the cosine of angle given in radians." << endl;
        float cos;
        cout << "Enter number: ";
        cin >> cos;
        if (!isdigit(cos))
        {
            cout << "The result of cos(" << cos << ") is: " << cosine(cos) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> cos;
            cout << "The result of cos(" << cos << ") is: " << cosine(cos) << endl;
        }
        break;
    case 't':
    case 'T':
        cout << "Returns the tangent of angle given in radians." << endl;
        float tan;
        cout << "Enter number: ";
        cin >> tan;
        if (!isdigit(tan))
        {
            cout << "The result of tan(" << tan << ") is: " << tangent(tan) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> tan;
            cout << "The result of tan(" << tan << ") is: " << tangent(tan) << endl;
        }
        break;
    case 'r':
    case 'R':
        cout << "Calculate the square root of given number." << endl;
        double sR;
        cout << "Enter number: ";
        cin >> sR;
        if (!isdigit(sR))
        {
            cout << "The square root of " << sR << " is: " << squareRoot(sR) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> sR;
            cout << "The square root of " << sR << " is: " << squareRoot(sR) << endl;
        }
        break;
    case 'l':
    case 'L':
        cout << "Returns the natural logarithm (base-e logarithm) of the given number." << endl;
        double loga;
        cout << "Enter number: ";
        cin >> loga;
        if (!isdigit(loga))

        {
            cout << "The result of log(" << loga << ") is: " << logarithm(loga) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> loga;
            cout << "The result of log(" << loga << ") is: " << logarithm(loga) << endl;
        }
        break;
    case 'e':
    case 'E':
        double exFirst;
        cout << "Enter the base value: ";
        cin >> exFirst;
        double exSecond;
        cout << "Enter the exponent value: ";
        cin >> exSecond;
        if (!isdigit(exFirst) && !isdigit(exSecond))
        {
            cout << "The result of " << exFirst << "^" << exSecond << " is: " << exponent(exFirst, exSecond) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter the base value: ";
            cin >> exFirst;
            cout << "Enter the exponent value: ";
            cin >> exSecond;
            cout << "The result of " << exFirst << "^" << exSecond << " is: " << exponent(exFirst, exSecond) << endl;
        }
        break;
    case 'p':
    case 'P':
        cout << "Pi is calculated with the following formula: x * pi " << endl;
        float number;
        cout << "Enter number: ";
        cin >> number;
        if (!isdigit(number))
        {
            cout << "The result of " << number << " * pi is: " << pi(number) << endl;
        }
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "You can only enter numbers. Try again." << endl;
            cout << "Enter number: ";
            cin >> number;
            cout << "The result of " << number << " * pi is: " << pi(number) << endl;
        }
        break;
    default:
        cout << "Oops! Something went wrong. Try again." << endl;
        break;
    }
}

int main()
{
    calculator();

    char no = 'n';
    char toContinue;
    cout << "Would you like to continue, yes(y) or no(n): ";
    cin >> toContinue;
    toContinue = (char)tolower(toContinue);

    while (toContinue && toContinue != no)
    {

        switch (toContinue)
        {
        case 'y':
            calculator();
            break;
        default:
            cout << "Oops! Something went wrong. Try again." << endl;
            break;
        }
        cout << "Would you like to continue, yes(y) or no(n): ";
        cin >> toContinue;
        toContinue = (char)tolower(toContinue);
    }
    return 0;
}