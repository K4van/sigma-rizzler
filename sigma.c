#include "sigma.h"
#include <stdio.h>

void printLogo()
{
    const char* LOGO = "________  ______  ________  ___        ___       ___      \n"
                       "__          __    __        ___ __  __ ___     __   __    \n"
                       "________    __    __   ___  ___  _  _  ___    __ ___ __   \n"
                       "      __    __    __    __  ___   __   ___   __       __  \n"
                       "________  ______  ________  ___        ___  __         __ \n";

    puts(LOGO);
}

void printMenu()
{
    printf("(P)lay\n"
           "(L)eaderboard\n"
           "(E)xit\n");
}

void clearScreen() 
{
    printf(CLEAR_SCREEN_REGEX);
}

void authRegister()
{

}
void printLeaderboard()
{

}