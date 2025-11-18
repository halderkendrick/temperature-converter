#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);
     fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", fahrenheit);
    return 0;
}