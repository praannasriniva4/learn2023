#include <stdio.h>

int main() {
    int operand1, operand2, result;
    char operator;

    printf("Enter operand1: ");
    scanf("%d", &operand1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter operand2: ");
    scanf("%d", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %d\n", result);
            } 
	    else {
                printf("Error: Division by zero is not allowed.\n");
            }
 	default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}