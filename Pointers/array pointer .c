//arr[i]==(arr+i)//Example arr[1]==arr+1 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,6,7};
    //The lint which written bellow are print the address of the array.usng &.
    printf("Value at the position 3 of the array is %d\n",arr[0]);
    printf("The address of the first element of the array %d\n",arr);
    printf("The address of the first element of the array is %d\n",&arr[0]);
    printf("The address of the second element of the array is %d\n",&arr[1]);
    printf("The address of the second element of the array is %d\n",arr+1);
    //arr++ These line will throw error.because arr is a constart not alloud to increament 
    //If we can we can make another poiner which point to arr it these case we can use increament operator
    //ex. int* arrayptr=arr; so now we can use arrayptr++.
        //Now we going to print the value of the array.using *.
    printf("\tThe value at address of the first element of the array is %d\n",*(arr));
    printf("The value at address of the first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of the second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of the second element of the array is %d\n",*(arr+1));


    return 0;
}
