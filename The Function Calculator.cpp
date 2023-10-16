// Hello. My name is Merdan Garlyyev, and I am taking CS231 this semester. The due date for this assignment is March 26, 2023. The program asks a user
// what operations user wants to perform (squareRoot, cube, natural log, inverse or absolute value). After the decision is made, the user enters a 
// number. After that the program makes math and gives relevant output.

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the square root of a number
void squareRoot()
{
    double num;
    cout << "Enter a positive number to calculate the square root: ";
    cin >> num;
    if (num < 0) {
        cout << "Not valid input. Please enter a positive number." << endl;
        return;
    }
    cout << "The square root of " << num << " is " << sqrt(num) << endl;
}

// Function to calculate the cube of a number
void cube()
{
    double num;
    cout << "Enter a number to calculate its cube: ";
    cin >> num;
    cout << num << " raised to the third power is " << pow(num, 3) << endl;
}

// Function to calculate the natural logarithm of a number
void naturalLog()
{
    double num;
    cout << "Enter a positive number to calculate its natural logarithm: ";
    cin >> num;
    if (num < 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return;
    }
    cout << "The natural log of " << num << " is " << log(num) << endl;
}

// Function to calculate the inverse of a number
void inverse()
{
    double num;
    cout << "Enter a non-zero number to calculate its inverse: ";
    cin >> num;
    if (num == 0) {
        cout << "Invalid input. Please enter a non-zero number." << endl;
        return;
    }
    cout << "The inverse of " << num << " is " << 1.0 / num << endl;
}

// Function to calculate the absolute value of a number
void absoluteValue()
{
    double num;
    cout << "Enter a number to calculate its absolute value: ";
    cin >> num;
    cout << "The absolute value of " << num << " is " << fabs(num) << endl;
}

// Main function
int main()
{
    char choice;
    do {
        // Display menu
        cout << endl << "Choose an option:" << endl;
        cout << "1. Calculate square root" << endl;
        cout << "2. Calculate cube" << endl;
        cout << "3. Calculate natural logarithm" << endl;
        cout << "4. Calculate inverse" << endl;
        cout << "5. Calculate absolute value" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Use of switch statement. Perform action based on user's choice
        switch (choice) {
            case '1':
                squareRoot();
                break;
            case '2':
                cube();
                break;
            case '3':
                naturalLog();
                break;
            case '4':
                inverse();
                break;
            case '5':
                absoluteValue();
                break;
            case '6':
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != '6');

    return 0;
}
