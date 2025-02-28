#include<stdio.h>
#include<conio.h>
void  main()
{
    int day;
    
    printf("Enter a number between 1 and 7 to Find Day of week: ");
    scanf("%d", &day);

    if (day >= 1 || day <= 7) {
    	// Used a switch statement to determine the day of the week
        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
               printf("Invalid Input");
			    // This block will never be reached because of the input validation
                break;
        }
        
    } else {
       printf("Invalid input\n");
        }

  getch();        
}

  


