#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <termios.h>

#define HEIGHT 20
#define WIDTH 70

void printBlankLine(){
  printf("|");
  for(int i = 0; i < WIDTH-2; i++){
    printf(" ");
  }
  printf("|\n");
}

void centerText(char *string){
  printf("|");
  int length = strlen(string);
  for(int i = 0; i < (WIDTH-2)/2 - length/2; i++){  //Formula reads: center of the line minus half of the length of the string.
    printf(" "); 
  } //Beginning spaces leading up to the string at hand
printf("%s", string);

  for(int i = (length + (WIDTH-2)/2 - length/2); i < WIDTH-2; i++){
    printf(" ");
  } //Spaces after the string at hand.  The for loops are ultracomplicated,
    //but it's not that bad.

  printf("|\n");
}


void printTicks(){
  for(int i = 0; i < WIDTH; i++){
    printf("-");
  } printf("\n");
}
