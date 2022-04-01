#include"Tic-Tac-Toe.h"
void check_rules()
{
    char link;
    printf("\tTic-Tac-Toe\n\n");
    printf("Welcome to Tic-Tac-Toe !!\n\n");
    printf("Rules:\n");
    printf("\n1:Players will be entering any number between 1-9  to put respective X or O in the desired position\n");
    printf("\n2:Player who gets a combination of 3 same characters either diagonally or horizontally or vertically will be declared \nas the winner");
    printf("\n\nEnjoy the game! Be a Winner!\n\n");
    printf("For more clarifications press Y else type any other character:- ");
    scanf("%c",&link);
    if(link=='y' || link=='Y')
    {
        system("start http://www.wikihow.com/Play-Tic-Tac-Toe");
    }

}
