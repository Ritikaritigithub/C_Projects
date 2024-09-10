//It's a game of Stone, Paper, Scissors
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int player, computer;
    computer = rand() % 3;
    //  0 for stone ;
    //  1 for paper;
    //  2 for scissors;

    printf("Enter 0 to select Stone, Enter 1 to Select Paper, Enter 2 to select Scissors : ");
    scanf("%d", &player);
   
    printf("Tern to choose by the computer : %d\n",computer);
     

    if(player == computer){
        printf("Match draw!!");
    }
    else if(player == 0 && computer == 1){
        printf("You Lose !!");
    }
    else if(player == 0 && computer == 2){
        printf("You win !!");
    }
    else if(player == 1 && computer == 0){
         printf("You Win !!");
    }
    else if(player == 1 && computer == 2){
         printf("You Lose !!");
    }
    else if(player == 2 && computer == 0){
         printf("You Lose !!");
    }
    else if(player == 2 && computer == 1){
        printf("You win !!");
    }
    else{
        printf("invalid Input");
    }
    return 0;
}