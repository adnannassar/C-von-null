//
// Created by Nassar, Mohamad Adnan on 30.11.21.
//

#include <stdio.h>


int calculate(int x, int y, char operation);
void readUserInput(char option);
void asciiTable();

int x, y;
char op;

int main()
{
    readUserInput('x');
    readUserInput('y');
    readUserInput('o');

    if( op == '+' || op == '-' || op == '*' || op == '/'){
        printf("Result of %d %c %d = ",x, op, y);
    }
    printf("%d\n", calculate(x, y, op));

    printf("--------------------------------------------------------\n\rAscsi Table:\n");
    asciiTable();

    return 0;
}

void asciiTable()
{

    for (int start = 32, counter = 0; start <= 126; start++, counter++)
    {
        printf("%4d %c", start, start);

        if (counter % 10 == 0)
        {
            printf("\n");
        }
    }
}

int calculate(int x, int y, char operation)
{

    switch (operation)
    {
        case '+':
            return x + y;
            break;
        case '-':
            return x - y;
            break;
        case '*':
            return x * y;
            break;
        case '%':
            return x % y;
            break;
        case '/':
            if (y == 0)
            {
                printf("x / 0 is undefinded!\n");
            }
            else
            {
                return x / y;
            }
            break;
        default:
            printf("Bitte eine gültige Eingabe\n");
            return -1;
    }
    return -1;
}

void readUserInput(char option)

{
    if (option == 'x')
    {
        printf("Bitte der ersten Zahl eingeben:");
        scanf("%d", &x);
    }
    if (option == 'y')
    {
        printf("Bitte der zweiten Zahl eingeben:");
        scanf("%d", &y);
    }
    if (option == 'o')
    {
        printf("Bitte die Operation eingeben:");
        scanf(" %c", &op);
    }
}