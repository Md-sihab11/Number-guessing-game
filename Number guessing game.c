#include<stdio.h>
int main()

{


    while(1)
    {
        int choice,seed,attempt=0,guess,ratenum;
        printf("\nWelcome to the number guessing game\n");

        printf("1.Play the game\n");
        printf("2.Exit the game\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf(" !!Welcome to the playing zone!!\n\n ");
            printf("Please enter the seed number to generate a random number:");
            scanf("%d",&seed);
            int random=(seed*31+17)%100+1;

            printf("I have chosen a number between 1 to 100\n");
            printf("Try to guess it..\n");

            while(1)
            {



                    printf("Enter your guess: ");
                    scanf("%d", &guess);
                    attempt++;


                    if (guess < random)
                    {

                        printf("Too low! Try again.\n"); // Too low
                    }
                    else if (guess > random)
                    {

                        printf("Too high! Try again.\n"); // Too high
                    }
                    else
                    {

                        printf("Congratulations! You've guessed the number %d in %d attempts.\n", random, attempt);
                        break; // Exit the guessing loop // Correct
                    }
                }break;

            // Provide feedback based on the result


            case 2:



                printf("Thank you for playing!!\n");
                printf("please rate us(1*-5*)number:");
                scanf("%d",&ratenum);
                if (ratenum==5)
                {
                    printf("Wow, that's cool ");

                }
                if (ratenum==4)
                {
                    printf("Wow!!, that's Amazing ");

                }
                if (ratenum==3)
                {
                    printf("Thank you ");

                }
                if (ratenum==2)
                {
                    printf(" Good dear ");

                }
                if (ratenum==1)
                {
                    printf("ok, baag akhan theke ");

                }
                return 0;


        default:
            {
                printf("Invalid choise!! try again..");
                break;
            }


        }



        }
    }




