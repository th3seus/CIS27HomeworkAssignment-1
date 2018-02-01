/**
 * Program Name:
 * Discussion:
 * Written By:  Stephen Miller
 * Due Date:    2018/02/06
 **/

#include <stdio.h>
#include <stdlib.h>

void displayClassInfoStephenM(void); // Display class info header
void displayMenuHw1(void); // display menu
void displayMenuInfo(void); // display menu info
int getUniqueEvenDigitCount(int); // gets count for unique even digits in int
int getLargestIntegerWithLargestTUEDCStephenM(int*, int); // return largest user
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
    int* userAry = 0;
    int size = 0;
    int largestIntWLUEDC = 0; // int with largest unique even digit count
    int i = 0;
    
    do {
        displayMenuInfo();
        printf("Enter an integer for option + ENTER: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1: // call getLargest...()
                do {
                    printf("\n");
                    printf("  How many integers? ");
                    scanf("%d", &size);
                    if (size == 0)
                        printf("\nNumber of integers must be greater than zero! Try again!");
                } while (size == 0);
                
                userAry = (int*)malloc(size * sizeof(int));
                
                for (i = 0; i < size; i++) {
                    printf("\n    Integer #%d: ", i + 1);
                    scanf("%d", userAry + i);
                }
                
                printf("\n\n  The original array:");
                for (i = 0; i < size; i++) {
                    printf("\n    %d", userAry[i]);
                }
                
                printf("\n\nCalling getLargestIntegerWithLargestTUEDCStephenM()");
                largestIntWLUEDC = getLargestIntegerWithLargestTUEDCStephenM(userAry, size);
                
                printf("\n\nAfter the function completed and returned the value,"
                       "\nthe largest integer that has the largest unique"
                       "\nEVEN digit count is\n  %d", largestIntWLUEDC);
                
                break;
            case 2: // quit menu
                printf("\nHaving Fun!\n");
                break;
            default: // wrong option
                printf("\nWRONG OPTION\n");
                break;
        }
    } while (option != 2);
}

void displayMenuInfo() {
    printf("\n****************************************\n"
           "*             Menu - HW #1 -           *\n"
           "* 1. Call getLargestIntegerWithTUEDC() *\n"
           "* 2. Quit                              *\n"
           "****************************************\n");
}


int getLargestIntegerWithLargestTUEDCStephenM(int* iPtr, int size) {
    /**
      * Iterates through userAry. Counts total even digits of each integer in array
      * to find the largest integer with the highest even digit count. If multiple
      * integers have the same even digit count, the largest of them is returned.
      **/

    int largestWMUED = *iPtr; // will contain largest int with most unique even digits
    int* countPtr = 0; // stores unique even digit count - key correspondes to iPtr
    int evenDigitCount = 0;
    int onlyOdds = -91919191; // in the event that no even digits are found, function returns this
    int i = 0;

    countPtr = (int*)malloc(size * sizeof(int)); // initializes countPtr to be same size as iPtr

    for (i = 0; i < size; i++) {
        countPtr[i] = getUniqueEvenDigitCount(iPtr[i]);
    }
    
    for (i = 0; i < size; i++) {
        if (evenDigitCount < countPtr[i]) {
            if(largestWMUED < iPtr[i]) {
                evenDigitCount = countPtr[i];
                largestWMUED = iPtr[i];
            }
        }
    }
    
    if (evenDigitCount == 0)
        return onlyOdds;
    else
        return largestWMUED;
}

int getUniqueEvenDigitCount(int arg) {
    int uniqueEDC = 0; // unique even digit count
    int evenDigitAry[10] = {0};
    int temp = 0;
    int i = 0;
    
    temp = (arg < 0) ? -arg : arg;
    
    if (temp == 0)
        uniqueEDC++;
    else {
        do {
            evenDigitAry[temp % 10] = 1;
            temp /= 10;
        } while (temp != 0);
    }
    
    for (i = 0; i < 10; i += 2) {
        uniqueEDC += evenDigitAry[i];
    }
    
    return uniqueEDC;
}
