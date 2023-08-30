#include<stdio.h>
void main()
{
        int dep,with,temp=100000,bal,no;
        printf("\n\t\t\t\t\t\t   Welcome to TANUJ's ATM\n");
        printf("\t\t_____________________________________________________________________________________________________\n");
        printf("\nPress 1 for Deposit\nPress 2 for withdraw\nPress 3 for Checking Account balance\nPlease enter your prefrence: ");
        scanf("%d",&no);
        switch (no)
        {
        case 1:printf("Enter amount to deposit in your account: ");
                scanf("%d",&dep);
                bal=temp+dep;
                printf("your updated account balance is: %d",bal);
                break;
        case 2:printf("Enter amount you want to withdraw: ");
                scanf("%d",&with);
                bal=temp-with;
                printf("your updated account balance is: %d",bal);
                break;
        case 3:printf("Your account balance is: %d",temp);
                break;
        default:
                break;
        }

}