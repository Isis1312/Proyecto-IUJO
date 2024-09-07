#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate logarithm with a specified base
double logBase(double a, double base) {
    if (base <= 0) {
        cerr << "Error: The base must be a positive number." <<endl;
        return NAN; // Return Not a Number if the base is invalid
    }
    return log(a) / log(base);
}

// Function to calculate logarithm with a root as base
double logRoot(double a, double root) {
    if (root <= 0) {
        cerr << "Error: The root must be a positive number." <<endl;
        return NAN; // Return Not a Number if the root is invalid
    }
    return logBase(a, pow(root, 1.0 / root));
}

// Function to calculate logarithm with a fraction as base
double logFraction(double a, double nume, double deno) {
    if (deno == 0) {
        cerr << "Error: The denominator cannot be zero." <<endl;
        return NAN; // Return Not a Number if the denominator is zero
    }
    return logBase(a, nume / deno);
}

int main (){
    
    char response;
    int option;
    double x;
    double base;
    double nume;
    double deno;
    double root;
    double result;
     
    do{
        cout << "Welcome to the logarithm calculator" <<endl;
        cout << "1. Calculate logarithm with a specified base" <<endl;
        cout << "2. Calculate logarithm with a root as base" <<endl;
        cout << "3. Calculate logarithm with a fraction as base" <<endl;
        cout << "Enter an option:";
        cout << endl;
        cin >> option;
                    
        if (option == 1) {
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter the base: ";
            cin >> base;
            
            result = logBase(x,  base);
            cout << "The result of the logarithm is: " << result <<endl;
                    
        } else if (option == 2) {
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter a root: ";
            cin >> root;
                
            result = logRoot(x , root);
            cout << "The result of the logarithm with root base is: " << result <<endl;
                            
        } else if (option == 3) {
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter a numerator: ";
            cin >> nume;
            cout << "Enter a denominator: ";
            cin >> deno;
                                
            result = logFraction(x, nume, deno);
            cout << "The result of the logarithm with fraction base is: " << result <<endl;
                                
        } else{
            cout << "ERROR! This option is not available" <<endl; 
        }
                        
        cout << endl;
        
        cout << "Would you like to run the calculator again? (y/n): ";
        cin >> response;
    }while  (response == 'y' || response == 'Y');
     
    cout << endl;
    cout << "Thank you for using our calculator";
    cout << endl;
      
    return 0;
}

