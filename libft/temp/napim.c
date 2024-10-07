#include <stdio.h>

int main() {
    float height, weight, result;

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    result = height / weight;

    if (result >= 0.2 && result <= 2.30) {
        printf("baas\n");
    } else if (result > 2.30 && result < 3) {
        printf("iyisin iyi\n");
    } else if (result >= 3) {
        printf("naptın hocam\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
