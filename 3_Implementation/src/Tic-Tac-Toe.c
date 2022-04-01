#include<stdio.h>
#include<string.h>
char x,o;
char a[9]={'1','2','3','4','5','6','7','8','9'};
char k[50],l[50];
void leader_board();
void check_rules();
int check_for_win();
int main()
{
    FILE *p;
    p=fopen("score.txt","a+");
    fclose(p);
    system("color 09");
    int player=1;
    int choice,score=-1;
    char symbol,re;
    char start,dec;
    int s;
    check_rules();
    printf("\n\nType 1 to start the game:-\nType 2 to view leader board:-\n");
    scanf("%d",&s);
    if(s==1)
    {
    read:
        p=fopen("score.txt","a+");
    printf("\nEnter name of player1: ");
    scanf("%s",k);
    fprintf(p,"\n%s",k);
    printf("Enter name of player2: ");
    scanf("%s",l);
    fprintf(p,"\t%s",l);
    fclose(p);
    if(!strcmp(k,l))
    {
        printf("Enter names of the PLAYERS!\n\n");
        goto read;
    }
    else
        decision_making();
    system("color fc");
   leader_board();
    do
    {

        player=((player%2)?1:2);
        if(player==1)
        printf("%s Type a number between 1-9 : ",k);
        else
            printf("%s Type any digit from 1-9 : ",l);
        scanf("%d",&choice);
        symbol=((player==1)?x:o);
        if(choice==1 && a[0]=='1')
            a[0]=symbol;
        else if(choice==2 && a[1]=='2')
            a[1]=symbol;
        else if(choice==3 && a[2]=='3')
            a[2]=symbol;
        else if(choice==4 && a[3]=='4')
            a[3]=symbol;
        else if(choice==5 && a[4]=='5')
            a[4]=symbol;
        else if(choice==6 && a[5]=='6')
            a[5]=symbol;
        else if(choice==7 && a[6]=='7')
            a[6]=symbol;
        else if(choice==8 && a[7]=='8')
            a[7]=symbol;
        else if(choice==9 && a[8]=='9')
            a[8]=symbol;
        else
            {printf("Wrong Selection\n");player--;}
        score=check_for_win();
        player++;
        leader_board();
    }while(score == -1);
    p=fopen("score.txt","a+");
    if(score==1)
    {

        if(player==2)
        {printf("\n\nPlayer1 %s Wins!\n\n",k);fprintf(p,"\t%s",k);
        getch();}
        else
            {printf("\n\nPlayer2 %s Wins!\n\n",l);fprintf(p,"\t%s",l);
        getch();
            }
        fclose(p);
    }
    else
        printf("\n\nGame Draws!\n\n");fprintf(p,"\t%s","DRAW");
        getch();
    }
    if(s==2)
    {
        int cho;
        system("cls");
        printf("\n\n");
        printf("\tLEADERBOARD\n\n");
        char c;
        p=fopen("score.txt","r");
        while((c=getc(p))!=EOF)
        {
            printf("%c",c);
        }
        fclose(p);
        printf("\n\nPress 1 to start the game : ");
        scanf("%d",&cho);
        if(cho==1)
            goto read;
        else
            getch();
    }
    else
    {
        printf("\n\nYou should have typed 1 to play the game!\nSee you back soon!\n\n");
        getch();
    }
}
int check_for_win()
{
    if(a[0]==a[1] && a[1]==a[2])
        return 1;
    else if(a[3]==a[4] && a[4]==a[5])
        return 1;
    else if(a[6]==a[7] && a[7]==a[8])
        return 1;
    else if(a[0]==a[3] && a[3]==a[6])
        return 1;
    else if(a[1]==a[4] && a[4]==a[7])
        return 1;
    else if(a[2]==a[5] && a[5]==a[8])
        return 1;
    else if(a[0]==a[4] && a[4]==a[8])
        return 1;
    else if(a[2]==a[4] && a[4]==a[6])
        return 1;
    else if(a[0]!='1' && a[1]!='2' && a[2]!='3' && a[3]!='4' && a[4]!='5' && a[5]!='6' && a[6]!='7' && a[7]!='8' && a[8]!='9')
        return 0;
    else
        return -1;
}

void leader_board()
{
    int i;
    system("cls");
    printf("\tTic-Tac-Toe\n\n");
        printf("\n\n");
        printf("%s:- (%c)\n%s:-  (%c)\n\n\n",k,x,l,o);
        printf("  %c |  %c | %c\n",a[0],a[1],a[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",a[3],a[4],a[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",a[6],a[7],a[8]);
        printf("    |    |    \n");
    }
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
int decision_making()
{
    char dec;
        asci:
        printf("\n\nPlayer1 %s choose the X or 0:",k);
        dec=getchar();
        scanf("%c",&dec);
        {
            if(dec=='X' || dec=='x')
            {
                x='X';
                o='0';
            }
        }
}
