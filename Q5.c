/*
Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
game development and robotics navigation.
*/

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point lies in First Quadrant");
    else if (x < 0 && y > 0)
        printf("Point lies in Second Quadrant");
    else if (x < 0 && y < 0)
        printf("Point lies in Third Quadrant");
    else if (x > 0 && y < 0)
        printf("Point lies in Fourth Quadrant");
    else if (x == 0 && y == 0)
        printf("Point is at Origin");
    else if (x == 0)
        printf("Point lies on Y-axis");
    else
        printf("Point lies on X-axis");

    return 0;
}
