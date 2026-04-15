#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**
 * SAT Math Solver: Quadratic Equation Analyzer
 * Developed by: Berk Atıl
 * Purpose: To solve ax^2 + bx + c = 0 and analyze roots for SAT preparation.
 */

void solveQuadratic() {
    double a, b, c;
    
    cout << "--- SAT Math: Quadratic Root Analyzer ---" << endl;
    cout << "Enter coefficients for ax^2 + bx + c = 0" << endl;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "Error: 'a' cannot be zero in a quadratic equation!" << endl;
        return;
    }

    // Step 1: Calculate Discriminant (Delta)
    double delta = (b * b) - (4 * a * c);
    cout << fixed << setprecision(2);
    cout << "\nStep 1: Calculate Discriminant (Delta = b^2 - 4ac)" << endl;
    cout << "Delta = " << delta << endl;

    // Step 2: Analyze Roots based on Delta
    cout << "\nStep 2: Analyzing Roots..." << endl;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Result: Two distinct real roots found." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } 
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Result: One repeated real root found." << endl;
        cout << "x = " << x << endl;
    } 
    else {
        cout << "Result: No real roots. (Complex roots exist in SAT context sometimes!)" << endl;
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-delta) / (2 * a);
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    char choice;
    do {
        solveQuadratic();
        cout << "\nAnalyze another equation? (y/n): ";
        cin >> choice;
        cout << "----------------------------------------" << endl;
    } while (choice == 'y' || choice == 'Y');

    cout << "Keep practicing for SAT! Success is inevitable." << endl;
    return 0;
}
