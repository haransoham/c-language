#include <stdio.h>
#include <stdlib.h>


void main(){

    while(1){
        system("clear");
        float number1 =0, number2=0,ans=0;
        char operation,again;
        printf("\n-----------------------------------------------\n");
        printf("\n\tWelcome to the Calculator Program!\n");
        printf("\n-----------------------------------------------\n\n");

        printf("\tEnter first number:\t");
        scanf("%f",&number1);
        printf("\n\tEnter second number:\t");
        scanf("%f",&number2);
        operation_:
        printf("\n\tEnter operation (+, -, *, /):\t");
        scanf("\n%c", &operation);
        switch(operation){
            case '+':
                ans=number1+number2;
                break;
            case '-':
                ans=number1-number2;
                break;
            case '*':
                ans=number1*number2;
                break;
            case '/':
                if(number2!=0){
                    ans=number1/number2;    
                        
                }else{
                    printf("Error: Division by zero is not allowed");
                    continue;
                }
                break;
            default:
             printf("Error: Wrong operation selection");
             goto operation_;
        }
        printf("\n-----------------------------------------------\n");
        printf("  Answer:  %f %c %f = %f  \n",number1,operation,number2,ans);
        printf("\n-----------------------------------------------\n\n");



        printf("Would you like to calculate again (y/n):");
        scanf("\n%c",&again);
        if(again!='y'){
            printf("Thank you for using the Calculator program. Good BYE ☺️\n");
            break;
        }

    }

}