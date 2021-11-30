//
// Created by Nassar, Mohamad Adnan on 30.11.21.
//

#include "dose.h"
#include <stdio.h>


#define PI 3.14

double hohe;   // attribute
double radius; // attribute



double umfang() // function
{
    return 2 * PI * radius;
}

double deckleFlashe()
{
    return PI * (radius * radius);
}

double mantelFlashe()
{
    return umfang() * hohe;
}

double oberFlashe()
{
    return (2 * deckleFlashe()) + mantelFlashe();
}

double volumen()
{
    return deckleFlashe() * hohe;
}

void berechneDose()
{
    printf("Geben sie den Wert von Radius ein: "); // output
    scanf("%lf", &radius);                          // input

    printf("Geben sie den Wert von Höhe ein: "); // output
    scanf("%lf", &hohe);                          // input

    printf("umfang: %.2lf\n", umfang());
    printf("deckleFlashe: %.2lf\n", deckleFlashe());
    printf("mantelFlashe: %.2lf\n", mantelFlashe());
    printf("oberFlashe: %.2lf\n", oberFlashe());
    printf("volumen: %.2lf\n", volumen());
}
