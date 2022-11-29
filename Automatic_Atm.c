#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    FILE *Atm_Password;
    FILE *Atm_pin;

    Atm_Password = fopen ("Atm_Password.txt", "w");
    Atm_pin = fopen ("Atm_pin.txt" , "w");
    
    int password,pin;
    printf("Enter Pin\n");
    scanf("%d",&pin);
    printf("Enter Your ATM Password\n");
    scanf("%d",&password);

    fprintf (Atm_pin, "%d" , pin);
    fprintf (Atm_Password , "%d", password);  

    fclose(Atm_pin);
    fclose(Atm_Password); 

    return 0;
}
