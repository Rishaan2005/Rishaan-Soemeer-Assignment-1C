#include <iostream>
using namespace std;


int main () {
    double celsius, fahrenheit ;

    // Ask the user for the temperature in Celsius
    cout << " Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = ( celsius * 9/5) + 32;

    // Display the result 
    cout << celsius << " Celsius is equal to " <<fahrenheit << " Fahrenheit." << endl;

    return 0;
}  
