#include <stdio.h>

int main(){
    int choice , movieType, age;
    float ticketPrice;

    printf("\n ......Movie Purchasing  System .......\n");
    printf("1. Purchase Ticket \n");
    printf("2. check show times\n");
    printf("3.Exit\n");
    printf("Enter your choice(1 ,2 ,3)");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("select movie type \n");
        printf("1.Regular movie (10$) \n");
        printf("2.Premium movie (15$) \n");
        printf("Enter movie type (1 ,2)");
        scanf("%d" , &movieType);

        if (movieType==1)
        {
            ticketPrice =10.0;
        }else if (movieType==2)
        {
            ticketPrice =15.0;
        }else{
            printf("Invalid movie type \n");
            return 1;
        }

        printf("Enter your age \n");
        scanf("%d" , &age);

        if (age <12)
        {
            ticketPrice *= 0.5;
        }else if (age > 60)
        {
            ticketPrice *= 0.7;
        }
        
       printf("Final price of ticket: $%.2f\n", ticketPrice);
        break;

        case 2:
        printf("....check show times \n");
        printf("Regular Movie: 10:00 AM, 1:00 PM, 6:00 PM\n");
        printf("Premium Movie: 11:30 AM, 3:30 PM, 8:00 PM\n");
        break;


        case 3:
        printf("...Good byee....\n");
        break;


        default:
        printf("Invalid choice \n");
        break;
    }




    return 0;
}