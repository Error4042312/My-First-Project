#include <stdio.h>
#include <cs50.h>
int main(void) {
    printf("Hi mum!\n");
    //string how = get_string("How are you? ");
    //printf("Glad you're feeling %s\n", how);
    float tempC;
    float tempF;
    tempC = get_float("What's the temp?");
    tempF = ((9.0/5.0)*tempC) + 32;
    printf("%.1f seems cold?\n", tempF);
}
