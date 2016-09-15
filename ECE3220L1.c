/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: TylerShipman
 *
 * Created on September 1, 2016, 10:14 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI  3.14

/*
 * 
 */
int main(int argc, char** argv) {
    
    int userRadius;
    double area;
    double userCost;
    double userSold;
    double difference;
    char userOperator;
    int userLeftValue;
    int userRightValue;
    double result;
    
    printf("What is the radius of your circle?\n\n");
    scanf("%d", &userRadius);
    
    area = userRadius * userRadius * PI;
    
    printf("\nThe area of a circle with a radius of %d is %.02lf\n\n", userRadius, area);
    
    
    printf("End of Example 1. Beginning Example 2.\n\n");
    
    printf("Enter the cost of the item you purchased:\n\n");
    scanf("%lf", &userCost);
    
    printf("\n\nEnter the price you sold the item for:\n\n");
    scanf("%lf", &userSold);
    
    if(userCost > userSold){
        
        difference = userCost - userSold;
        printf("\n\nToo bad! You lost $%.02lf.\n\n", difference);
        
    }
    
    else if(userCost < userSold){
        difference = userSold - userCost;
        printf("\n\nCongratulations!. You made $%.02lf.\n\n", difference);
        
    }
    
    else if(userCost == userSold){
        
        printf("\n\nYou did not make or lose any money.\n\n");
    }
    
    
    printf("Enter the first number:");
    scanf("%d", &userLeftValue);
    getchar();
    printf("Enter the operation:");
    userOperator = getchar();
    printf("Enter the second number:");
    scanf("%d", &userRightValue);
    
    
    if(userRightValue == 0 && userOperator == '/'){
        printf("Error: Can not divide by 0");
        return 0;
    }
    switch(userOperator){
        
        case '*':
            result = (double)userLeftValue * (double)userRightValue;
            break;
        case '/':
            result = (double)userLeftValue / (double)userRightValue;
            break;
        case '+':
            result = (double)userLeftValue + (double)userRightValue;
            break;
        case '-':
            result = (double)userLeftValue - (double)userRightValue;
            break;
   
    }
    
    printf("\n\n%d %c %d = %.02lf", userLeftValue,userOperator, userRightValue, result);
    
    
    

    return (EXIT_SUCCESS);
}


