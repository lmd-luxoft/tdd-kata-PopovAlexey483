#include "pch.h"
#include "string.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{
    return 0;
}

int Calculator::Add(char* expression)
{
    // Empty
    if (strlen(expression) == 0) return 0;
    // Few parameters  
    if (strlen(expression) == 1) return 0;
    if (strlen(expression) == 2) return 0;
    // Munis
    if (strchr(expression, '-')) return 0;
    // Format error
    if (strchr(expression, ',') == NULL) return 0;
    // First param error 
    if(expression[0] == ',') return 0;
 
    int firstNumber;
    int secondNumber;

    // One
    if (expression[1] == ',')
    {
        firstNumber = atoi(expression + 0);
        secondNumber = atoi(expression + 2);
    }
    // Two
    else if (expression[2] == ',')
    {
        firstNumber = atoi(expression + 0);
        secondNumber = atoi(expression + 3);
    }

    return firstNumber + secondNumber;
}
