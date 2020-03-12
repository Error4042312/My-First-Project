#include <stdio.h>
#include <cs50.h>
#include <math.h>
//rjeon.pennies

int main(void)
{
    int numDays, start;
    double total;

    do
    {
        numDays = get_int("Enter number of days: ");
    }
    while (numDays < 28 || numDays > 31); //checks for validation of the number of days in a month

    do
    {
        start = get_int("How many pennies are there on the first day?"); //gets user input: https://www.codewithc.com/print-integer-c-program/
    }
    while (start < 1); //checks for validation of the number of pennies
    for (int i = 0; i < numDays; i++)
    {
        total = total + start * pow(2, i);
    }
    printf("$%.2f\n", total / 100);
}
