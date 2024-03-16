#include<stdio.h>
void add ()   // function declaration  //Without agrument without riturn value.
{
    int a,b,c;                                                    //function defination.                                   
    printf("Enter two nomber for addition \n");                                 //function defination.           
    scanf("%d%d",&a,&b);                                          //function defination.      
    c=a+b;                                                        //function defination.    
    printf("The addation of two number using without argument without riturn value  %d\n",c);                             //function defination .   
}
void sum (int q , int w)   //Also called as Formal arguments .//Function declaration with argument without riturn value.
{
      int j=q/w;                                                                   //function defination.
      printf("The division of using with argument without riturn is %d\n",j);          //function defination.
}
int minus ()              //function declaration without argument with return value. for substractin off two values.
{
    int a,b;                          //function defination.
    printf("Enter the two number\n"); //function defination.
    scanf("%d%d",&a,&b);              //function defination.
    return a-b;                       //function return value.
}

int multiplication (int a,int b)           //function declaration for multiplaction . //with argumrnt with return value.
{
    
   return a*b;

}

int main()                     //Starting of main function.
{
    add();                              //function call. 
                                 

    int x,y;                   
    printf("Enter the two values for division\n");
    scanf("%d%d",&x,&y);
    sum(x,y);             //Actual argument or parameaters.   //Call by value and the value in x,y will be coiped in user define function "sum".
  

    int c;
    c=minus();          //Here we call minus function and take value in int c.
    printf("Minus of two values using withhout argument with return value is %d\n",c);  //&Here we printed value which return by user difine function minus and which stored ic c.
    
    int l,u,z;
    printf("Enter the two values\n");
    scanf("%d%d",&l,&u);
    z=multiplication(l,u);    //Here we call function multiplaction and give argument value which stores in a,b and function return us multiplaction of l,u.
    printf("Multiplication of two number using with argument with return value is %d\n",z);      //Here we print returned value by muiltiplaction function which we store in int z.
    return 0;
}

