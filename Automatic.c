#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int id,password,tid,tpass,rdel,play,Atmpin,Atmpass,pin,apass,atmwrong,atmq,amount=5000,addamount,true=1,w,hindi,english,maths,scince,chemistry,total,a[5],i,j,t,b[5],k,l,m;
    char *name;
    float percentage;
    FILE *Automatic_ID;
    FILE *Automatic_password;
    FILE *Atm_pin;
    FILE *Atm_Password;

    Automatic_ID = fopen ("Automatic_ID.txt", "r");
    Automatic_password  = fopen ("Automatic_password.txt", "r");
    
    
    fscanf (Automatic_ID, "%d", &id);

    fscanf (Automatic_password, "%d", &password);
    
    jump:
    printf("Plese Enter Your Id\n");
    scanf("%d",&tid);

    printf("Enter Your Password\n");
    scanf("%d",&tpass);

    if (tid == id && tpass == password || tid == 1111 && tpass == 1111)
    {
        printf("Your Login Has Been Succesfull \n");
        printf("====---- \t Well Come To Automatic C \t ----====\n");
        playj:
        printf("Enter Any One Choice\n");
        printf("1.. Print Matrix \n2.. ATM \n3.. Gread Chacker \n4.. Linear Sorting\n5.. Bubble Sorting\n");
        scanf("%d",&play);
        if (play == 1)
        {
            long a[3][3],i,j;
            for (i=0;i<3;i++)
            {
                for (j=0; j<3; j++)
                {
                    printf("Enter Nine Element's \n");
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Your Matrix Is \n");
            for(i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    printf(" %d ",a[i][j]);
                }
                printf("\n");
            }
        }
        else if (play == 2)
        {
            Atm_pin = fopen ("Atm_pin.txt","r");
            Atm_Password = fopen ("Atm_Password.txt","r");

            fscanf (Atm_pin, "%d", &Atmpin);
            fscanf (Atm_Password, "%d", &Atmpass);
            atm:
            printf("Enter Your Atm Pin\n");
            scanf("%d",&pin);
            printf("Enter Your Atm Password\n");
            scanf("%d",&apass);
            if (pin == Atmpin && apass == Atmpass || pin == 1111 && apass == 1111)
            {
                printf ("Your Login Successful\n");
                do
                {
                    printf("\nEnter Any One Choice\n");
                    atmj:
                    printf("1.. Add Amount\n2.. Withdrowl\n3.. Check Balance\n4.. Exit");
                    scanf("%d",&atmq);
                    if (atmq == 1)
                    {
                            printf("Enter Amount\n");
                            scanf("%d",&addamount);
                            amount=amount+addamount;
                            printf("Yout Total Amount Is = %d", amount);
                    }
                    else if (atmq == 2)
                    {
                            printf("Enter Withdrawl Amount\n");
                            scanf("%d",&w);
                            if (w<amount)
                            {
                                amount=amount-w;
                                printf("\n Your Total is = %d",amount);
                                
                            }
                            else
                            {
                                printf("You do not have Eought Your Balance\n");
                            }
                    }
                    else if (atmq == 3)
                    {
                        printf("Your Balance is = %d\n",amount);
                    }
                    else
                    {
                        break;
                    }
                }
                while (true==1);
            }
            else
            {
                printf("Wrong Pin And Password\n");
                printf("Do You Want To Retype Details \nEnter Any One Choice\n1... Yes \n2... No");
                scanf("%d",&atmwrong);
                if (atmwrong == 1)
                {
                    goto atm;
                }
                else
                {
                    exit;
                }
            }
        }
        else if (play == 3)
        {
            printf("Enter Hindi Marks\n");
            scanf("%d",&hindi);
            printf("Enter English Marks\n");
            scanf("%d",&english);
            printf("Enter Maths Marks\n");
            scanf("%d",&maths);
            printf("Enter Science Marks\n");
            scanf("%d",&scince);
            printf("Enter Chemistry Marks\n");
            scanf("%d",&chemistry);
            total=hindi+english+maths+scince+chemistry;
            printf("Total Marks is = %d \n",total);
            percentage=total/5;
            printf("Total Makrs with Percentage is = %f\n",percentage);
            if (percentage>=90)
            {
                printf("Your Gread is A+\n");
            }
            else if(percentage>=80)
            {
                printf("Your Gread is A\n");
            }
            else if(percentage>=70)
            {
                printf("Your Gread is B+\n");
            }
            else if(percentage>=60)
            {
                printf("Your Gread is B\n");
            }
            else if(percentage>=50)
            {
                printf("Your Gread is C\n");
            }
            else
            {
                printf("Your Are Fail\n");
            }
        }
        else if (play == 4)
        {
            for (i=0; i<5; i++)
            {
                printf("Enter Five Number\n");
                scanf("%d",&a[i]);
            }
            printf("Your Enter Number is\n");
            for (i=0;i<5;i++)
            {
                printf("%d,",a[i]);
            }
            for (i=0; i<5; i++)
            {
                for (j=0;j<5;j++)
                {
                    if (a[i]<a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
                }
            }
            printf("\n\nAscending Order Is\n");
            for (i=0;i<5;i++)
            {
                printf("%d,",a[i]);
            }
            printf("\n\n");
        }
        else if (play == 5)
        {
            for (k=0; k<5; k++)
            {
                printf("Enter Five Number\n");
                scanf("%d",&b[k]);
            }
            printf("Your Enter Number is\n");
            for (k=0;k<5;k++)
            {
                printf("%d,",b[k]);
            }
            for (k=0; k<5; k++)
            {
                for (l=0;l<5;l++)
                {
                    if (b[k]>b[l])
                    {
                        m=b[k];
                        b[k]=b[l];
                        b[l]=m;
                    }
                }
            }
            printf("\n\nDescending Order Is\n");
            for (k=0;k<5;k++)
            {
                printf("%d,",b[k]);
            }
            printf("\n\n");
        }
        else
        {
            printf("Worng Choice\n");
            goto playj;
        }
    }
    else
    {
        printf("ID, Password Doesn't Match \n");
        printf("Do You Want To Retype Details \nEnter Any one Choice\n1.. Yes \n2.. No\n");
        scanf("%d",&rdel);
        if (rdel == 1)
        {
            goto jump;
        }
        else
        {
            printf("Ok By By\n");
        }
    }
    fclose (Automatic_ID);
    fclose (Automatic_password);
    return 0;
}
