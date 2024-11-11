/*
 * SIGMA RIZZLER
 * 
 * A simple turn-based game about Sigma and Rizz
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "sigma.h"

int main()
{   
    clearScreen();
    printLogo();
    printMenu();
    
    char confirm;
    printf("\nEnter your choice(P/L/E): ");
    scanf(" %c", &confirm);
    switch (tolower(confirm)) {
        case 'p':
            puts("Play");
            authRegister();
            break;
        case 'l':
            puts("Leaderboard");
            printLeaderboard();
            break;
        case 'e':
            puts("Exiting...");
            exit(EXIT_SUCCESS);
        default:
            puts("Invalid choice!");
    }
    return 0;
}