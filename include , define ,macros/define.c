#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define squre(x) x*x    //Here we define what will the squre do.
#define PI 3.14         //Here we difinte the value of the pi.
int main()
{
    int r;
    float area;
    printf("Enter the redius of the circle\n");
    scanf("%d",&r);
    area=PI*squre(r); //compilar treate this like PI * r * r; because we already define the work of the squre.
    printf("The area of the circle is %.2f\n",area);
    
    return 0;
}