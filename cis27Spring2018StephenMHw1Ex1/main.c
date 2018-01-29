//
//  main.c
//  cis27Spring2018StephenMHw1Ex1
//
//  Created by Stephen on 1/28/18.
//  Copyright © 2018 Stephen. All rights reserved.
//

#include <stdio.h>

void displayClassInfoStephenM(void); // Display class info header
void displayMenuHw1(void); // display menu
int* init(int); // initialize main user array using user input
int* displayEvenOddDigitInfoStephenM(int); // get info on unique even/odd digits
int getLargestIntegerWithLargestTUEDCStephenM(int*); // return largest user
                                                    // with most even digits

int main(int argc, const char * argv[]) {
    displayClassInfoStephenM();
    
    displayMenuHw1();
    return 0;
}

void displayClassInfoStephenM() {
    printf("CIS 27 - Data Structures\n"
           "Laney College\n"
           "Stephen Miller\n\n"
           "Assignment Information --\n"
           "  Assignment Number:    Homework 1,\n"
           "                        Coding Assignment -- Exercise #1\n"
           "  Written By:           Stephen Miller\n"
           "  Submitted Date:       2018/02/01\n\n");
}

void displayMenuHw1() {
    // main menu program
    int option = 0;
    
    do {
        printf("****************************************\n"
               "*             Menu - HW #1 -           *\n"
               "* 1. Call getLargestIntegerWithTUEDC() *\n"
               "* 2. Quit                              *\n"
               "****************************************\n");
        printf("Enter an integer for option + ENTER: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1: // call getLargest...()
                break;
            case 2: // quit menu
                printf("\nQuitting\n");
                break;
            default: // wrong option
                printf("\nWRONG OPTION\n");
                break;
        }
    } while (option != 2);
}
