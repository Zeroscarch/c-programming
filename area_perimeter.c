#include <stdio.h>

int main(){
    int l = 10;
    int w = 5;

    int area = l*w;
    int peri = 2*(l+w);

    printf("Area is: %d\n",area);
    printf("Perimeter is: %d",peri);

    return 0;
}