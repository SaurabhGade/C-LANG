#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>                      //I include math.h because I need suqure root in program . and math.h contain predefine function for the squre root.
#define PI 3.14
double EuclideanDistance(int x1, int y1, int x2, int y2)
{
    int x, y, sqrX, sqrY;
    x = x2 - x1;
    y = y2 - y1;
    sqrX = x * x;
    sqrY = y * y;
    return sqrt(sqrX + sqrY);
}
void cirlceOfCircle(int x1, int y1, int x2, int y2, double (*fptr)(int x1,int y1, int x2, int y2))
{
    double area;
    double r=fptr(x1,y1, x2, y2);
    area = r * r * PI;
    printf("The area of the circle is : %lf\n",area);

}
void main()
{
    int x1, y1, x2, y2;
    double distance;
    printf("Enter cordinate x1,y1,x2,y2\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("a(%d , %d)\tb(%d , %d)\n", x1, y1, x2, y2);
    double (*ptr)(int, int, int, int);
    ptr = &EuclideanDistance;
    distance = ptr(x1, y1, x2, y2);
    cirlceOfCircle(x1, y1, x2, y2 , ptr);
    printf("The distance between two point's is : %lf\n",distance);
}