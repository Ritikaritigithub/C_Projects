#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //seed the random number generator
    srand(time(0));
    
    //generate a random number 1 to 100
    

    //print the random number
    //printf("%d\n",randomNumber);
    int randomNumber = (rand() % 100) + 1;
    int guess_number, guessedNumber, Number_of_attempts=0;

    do{
        printf("Guess the number : \n");
        scanf("%d",&guessedNumber);
        if(guessedNumber < randomNumber){
            printf("Please Enter Higher One!\n");
        }
        else if(guessedNumber > randomNumber){
            printf("Please Enter Lower One\n");
        }
        else{
            printf("Congratulations, You guessed The number\n");
        }
        Number_of_attempts++;
    }while(guessedNumber!=randomNumber);

    printf("The Number of Attempts you take : %d",Number_of_attempts);

    return 0;
}