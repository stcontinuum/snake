#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <termios.h>

#define HEIGHT 20
#define WIDTH 70

//I will include customizable controls one day.

#define UP          38
#define DOWN        40
#define LEFT        37
#define RIGHT       39

void displayScreen();
void displayLoadingScreen();
void centerText(char *string);
void printBlankLine();
void printTicks();
extern char getch();  //As defined by a member of the Ubuntu team
void displayOptions(); 
void displayAbout(); 
void displayHelp(); 

void initializeGame(); 
int generateSnake(); 
int generateFood(); 

int main(){
  system("clear");
  displayLoadingScreen();  //first things first; display the loading screen!
  //the loading sceen will contain call to the initializeGame() function.
}

void displayLoadingScreen(){
  printTicks();  
  printBlankLine();

  centerText("Snake 1.0"); centerText("1. Play");  centerText("2. Options");
  centerText("3. Help"); centerText("4. About");  centerText("5. Exit");
  
  printBlankLine();
  printTicks();
  char c; c = getch();

  switch(c){
  case '1':
    initializeGame();  //the game has been started!
    break;
  case '2':
    displayOptions();
    break;
  case '3':
    displayHelp();
    break;
  case '4':
    displayAbout();
    break;
  case '5':
    return;
    break;
  default:
    displayLoadingScreen();
    }
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

void printBlankLine(){
  printf("|");
  for(int i = 0; i < WIDTH-2; i++){
    printf(" ");
  }
  printf("|\n");
}

void printTicks(){
  for(int i = 0; i < WIDTH; i++){
    printf("-");
  } printf("\n");
}

void displayOptions(){
  system("clear");
  printTicks();
  printBlankLine();
  centerText("Nothing to see here.");
  printBlankLine();
  printTicks();
  getch();
  displayLoadingScreen();
}

void displayHelp(){
  system("clear");
  printTicks();
  printBlankLine();
  centerText("I want you to look deep inside yourself,");
  centerText("and ask yourself if you really want");
  centerText("to be looking at help for snake right now.");
  printBlankLine();
  printTicks();
  getch();
  displayLoadingScreen();
}

void displayAbout(){
  system("clear");
  printTicks();
  printBlankLine();
  centerText("This fine piece of work was erupted back in the day by");
  centerText("a fellow from your local neighborhoopla.");
  printBlankLine();
  printTicks();
  getch();
  displayLoadingScreen();
}

void initializeGame(){
  //Generate snake, generate food, generate obstacles....
  int map[20][20];
  generateSnake(map);
  generateFood();
  //generateObstacles()
}

int generateSnake(int map[]){
  printf("%d", map[0]);
  return 0;
}

int generateFood(){
  return 0;
}
