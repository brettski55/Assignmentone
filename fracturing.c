//Brett Albury UCFID br548264
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846  // Pi declaration

// declaring functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
//calling functions
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // user coordinates
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    // distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));;

    // points and distance
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance;  
    double x1,y1,x2,y2;
    // user coordinates
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is - %lf\n", perimeter);
    return 2.0; 
}

double calculateArea() {
    double distance = calculateDistance(); 
    double area = distance * distance; 
    double x1,y1,x2,y2;
    //user coordinates
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The area of the city encompassed by your request is - %lf\n", area);
    return 2.0; 
}

double calculateWidth() {
    double x1, y1, x2, y2, width;

    // user coordinates
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate width
    width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The width of the city encompassed by your request is - %lf\n", width);

    return 1.0;  
}

double calculateHeight() {
    double x1, y1, x2, y2, height;

    // user coordinates
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate height 
    height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The height of the city encompassed by your request is - %lf\n", height);

    return 2.0;  
}
