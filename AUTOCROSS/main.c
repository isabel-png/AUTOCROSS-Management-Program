#include <stdio.h>
#include <stdlib.h>
#include "AUTOCROSS.H"
#include "AUTOCROSS.C"

int main()
{
    int cont;
    displayWelcome();
    cont=login(); //variable indicating a successful login
    if(cont==0)
    {
        menu();
    }
    displayExit();
    return 0;
}
