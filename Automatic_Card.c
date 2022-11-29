#include<stdio.h>

 int main() 
 {
    FILE *Automatic_Password;
    FILE *Automatic_ID;
    Automatic_Password = fopen ("Automatic_password.txt", "w");
    Automatic_ID = fopen ("Automatic_ID.txt", "w");

    int id,password;
    printf("Enter Integer Id\n");
    scanf("%d",&id);
    printf("Enter Password\n");
    scanf("%d",&password);

    fprintf(Automatic_Password, "%d", password);
    fprintf(Automatic_ID ,"%d" , id);

    fclose(Automatic_Password);
    fclose(Automatic_ID);
    return 0;
 }
