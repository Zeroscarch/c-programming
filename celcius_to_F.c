#include <stdio.h>

int main(){
    float temp_c;
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&temp_c);

    float temp_f = (temp_c*(1.8)) + 32;
    printf("The temperature in fahrenheit is: %.2f",temp_f);

    return 0;
}