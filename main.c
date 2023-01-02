#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

void white_on_green() {
    printf("\033[37;42m");
}

void white_on_red() {
    printf("\033[41;37m");
}

void blue() {
    printf("\033[0;34m");
}

void reset() {
    printf("\033[0m");
}

void disarmed() {
    printf("              ,---------------------------,\n");
    printf("              |  /---------------------\\  |\n");
    printf("              | |                       | |\n");
    printf("              | |                       | |\n");
    printf("              | |        Disarmed       | |\n");
    printf("              | |                       | |\n");
    printf("              | |                       | |\n");
    printf("              |  \\---------------------/  |\n");
    printf("              |___________________________|\n");
    printf("                \\_____     []     _______/\n");
    printf("                    /______________\\ \n");
}

void armed() {
    printf("              ,---------------------------,\n");
    printf("              |  /---------------------\\  |\n");
    printf("              | |");
    white_on_green();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_green();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_green();
    printf("         Armed         ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_green();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_green();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              |  \\---------------------/  |\n");
    printf("              |___________________________|\n");
    printf("                \\_____     []     _______/\n");
    printf("                    /______________\\ \n");
    reset();
}

void triggered() {
    printf("              ,---------------------------,\n");
    printf("              |  /---------------------\\  |\n");
    printf("              | |");
    white_on_red();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_red();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_red();
    printf("     !!Triggered!!     ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_red();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              | |");
    white_on_red();
    printf("                       ");
    reset();
    printf("| |\n");
    printf("              |  \\---------------------/  |\n");
    printf("              |___________________________|\n");
    printf("                \\_____     []     _______/\n");
    printf("                    /______________\\ \n");
    reset();
}

int main(void){
    int S0=0, S1=0, s0=0, s1=0, i1=0, i2=0, O0=0, O1=0;
    while(true){
        if ((S0 == 0) && (S1 == 0)){
            system("clear");
            disarmed();
            if ((i1 == 0) && (i2 == 0)) {
                printf("\n\nButton\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 0)) {
                blue();
                printf("\n\nButton");
                reset();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 0) && (i2 == 1)) {
                printf("\n\nButton");
                blue();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 1)) {
                blue();
                printf("\n\nButton\t\tMotion\n\n");
            }
            reset();
            printf("Current state: %d %d\n",S0,S1);
        }
        else if ((S0 == 0) && (S1 == 1)){
            system("clear");
            armed();
            if ((i1 == 0) && (i2 == 0)) {
                printf("\n\nButton\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 0)) {
                blue();
                printf("\n\nButton");
                reset();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 0) && (i2 == 1)) {
                printf("\n\nButton");
                blue();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 1)) {
                blue();
                printf("\n\nButton\t\tMotion\n\n");
            }
            reset();
            printf("Current state: %d %d\n",S0,S1);
        }
        else if ((S0 == 1) && (S1 == 0)){
            system("clear");
            triggered();
            if ((i1 == 0) && (i2 == 0)) {
                printf("\n\nButton\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 0)) {
                blue();
                printf("\n\nButton");
                reset();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 0) && (i2 == 1)) {
                printf("\n\nButton");
                blue();
                printf("\t\tMotion\n\n");
            } else if ((i1 == 1) && (i2 == 1)) {
                blue();
                printf("\n\nButton\t\tMotion\n\n");
            }
            reset();
            printf("Current state: %d %d\n",S0,S1);
        }

        i1 = 0;
        i2 = 0;
        int input;
        printf("Type the input (0 for nothing // 1 for button input // 2 for motion detection // 3 for both): ");
        scanf("%d",&input);

        if (input == 0) {
            i1 = 0;
            i2 = 0;
        } else if (input == 1){
            i1 = 1;
            i2 = 0;
        } else if (input == 2){
            i1 = 0;
            i2 = 1;
        } else if (input == 3) {
            i1 = 1;
            i2 = 1;
        } else {
            i1 = 1;
            i2 = 1;
        }

        states(s0,s1,i1,i2,&S0,&S1);
        s0 = S0;
        s1 = S1;
    }

    return 0;
}