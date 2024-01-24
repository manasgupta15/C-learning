#include<iostream>
using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "***** Temperature Conversion ****"<< endl;
    cout << "F = Fehrenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert to: " << endl;
    cin >> unit;

    if(unit == 'F' || unit == 'f') {
        cout << "enter the temperature in celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "temperature is: " << temp << "F\n";
    } else if(unit == 'C' || unit == 'c') {
        cout << "enter the temperature in fehrenheit: ";
        cin >> temp;

        temp = (temp-32)/1.8;
        cout << "temperature is: " << temp << "C\n";
    } else {
        cout << "please enter in only C or F\n";
    }

    cout << "****************************";
    return 0;
}