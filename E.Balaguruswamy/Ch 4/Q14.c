#include <stdio.h>
#include <math.h>

#define PI 3.14159265
int main() {
    int angle;

    printf("Angle\tCosine\t\tSine\n");
    printf("-----\t------\t\t------\n");

    for (angle = 0; angle <= 180; angle += 15) {
        double radian = angle * PI / 180.0;
        double cosine = cos(radian);
        double sine = sin(radian);

        printf("%d\t%.4f\t\t%.4f\n", angle, cosine, sine);
    }

    return 0;
}







