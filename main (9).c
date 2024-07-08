#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центру та радіус першого кола (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати центру та радіус другого кола (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    int result;
    if (d == 0 && r1 == r2) {
        result = -1;
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        result = 0;
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        result = 1; 
    } else {
        result = 2;
    }
    printf("Кількість точок перетину: %d\n", result);
    return 0;
}
