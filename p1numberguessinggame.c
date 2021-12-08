#include <stdio.h>
#include <stdlib.h>
#include<time.h>>

int main(){
    int number , guessnumber ,ngusses=1;// to remove the waring from rand use stdlib.h
    srand(time(0));
    number = rand()%100 +1; // generates a random number between 1 and 100
    //printf("the number is %d \n",number);
    // keep runnig the loop until the number is guessed
    do
    {
      printf("guess the number between 1 and 100 \n");
      scanf("%d",&guessnumber);
      if (guessnumber>number)
      {
        printf("lower number please \n");
      }
      else if (guessnumber<number){
          printf("higher number please \n");
      }
      else{
          printf("you guessed it in %d attempts \n",ngusses);
      }
      ngusses++;
    }while (guessnumber !=number);
     return 0;
}