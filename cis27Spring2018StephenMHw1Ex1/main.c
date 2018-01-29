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
    return 0;
}

void displayClassInfoStephenM() {
    printf("CIS 27 - Data Structures\n"
           "Laney College\n"
           "Stephen Miller\n\n"
           "Assignment Information --\n"
           "\tAssignment Number:\tHomework 1,\n"
           "\t\t\t\t\t\tCoding Assignment -- Exercise #1\n"
           "\tWritten By:\t\t\tStephen Miller\n"
           "\tSubmitted Date:\t\t");
}
