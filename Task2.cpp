#include <iostream>
#include <iomanip> // for setting precision of output
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}

int main() {
    char scale;
    double temperature;

    cout << "Temperature Conversion Program" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter the temperature scale you are converting from (C, F, K): ";
    cin >> scale;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    switch (scale) {
        case 'C':
        case 'c':
            cout << temperature << " Celsius is equivalent to:" << endl;
            cout << fixed << setprecision(2) << celsiusToFahrenheit(temperature) << " Fahrenheit" << endl;
            cout << fixed << setprecision(2) << celsiusToKelvin(temperature) << " Kelvin" << endl;
            break;
        case 'F':
        case 'f':
            cout << temperature << " Fahrenheit is equivalent to:" << endl;
            cout << fixed << setprecision(2) << fahrenheitToCelsius(temperature) << " Celsius" << endl;
            cout << fixed << setprecision(2) << fahrenheitToKelvin(temperature) << " Kelvin" << endl;
            break;
        case 'K':
        case 'k':
            cout << temperature << " Kelvin is equivalent to:" << endl;
            cout << fixed << setprecision(2) << kelvinToCelsius(temperature) << " Celsius" << endl;
            cout << fixed << setprecision(2) << kelvinToFahrenheit(temperature) << " Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid temperature scale. Please enter C, F, or K." << endl;
            break;
    }

    return 0;
}