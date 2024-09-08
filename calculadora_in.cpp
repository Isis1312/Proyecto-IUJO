#include <iostream>
#include <cmath>

using namespace std;


double logBase(double a, double base) {
    if (base <= 0) {
        cerr << "Error: The base must be a positive number." <<endl;
        return NAN; // 
    }
    return log(a) / log(base);
}


double logRoot(double a, double root) {
    if (root <= 0) {
        cerr << "Error: The root must be a positive number." <<endl;
        return NAN; 
    }
    return logBase(a, pow(root, 1.0 / root));
}


double logFraction(double a, double nume, double deno) {
    if (deno == 0) {
        cerr << "Error: The denominator cannot be zero." <<endl;
        return NAN; 
    }
    return logBase(a, nume / deno);
}

int main (){
    
    char respuesta;
    int option;
    double x;
    double base;
    double nume;
    double deno;
    double root;
    double result;
    bool respuesta_valida = false;

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
        cin >> respuesta;
            while (!respuesta_valida) {
            if (respuesta == 'y' || respuesta == 'Y' || respuesta == 'n' || respuesta == 'N') {
                respuesta_valida = true;
            } else {
                std::cout << "Answer not valid. Please enter 'y' or 'n': ";
                std::cin >> respuesta;
            }
        }

        respuesta_valida = false; 
    } while (respuesta == 'y' || respuesta == 'Y');
     
    cout << endl;
    cout << "Thank you for using our calculator";
    cout << endl;
      
    return 0;
}

