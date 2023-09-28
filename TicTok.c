#include<stdio.h>
#include<stdlib.h>
char arr[] = {'1','2','3','4','5','6','7','8','9'};
void Welcome()
{
    printf("\t\tWelcome To Ticktok Game : \n");
}
void Symbol()
{
    printf("\tSymbol For Players Are Given Below : \n");
    printf("\t\tPlayer 1 :x: \n");
    printf("\t\tPlayer 2 :0: \n");
}
void show()
{
    printf("\n\n");
    printf("\t\t\t\t\t|---|---|---|\n");
    printf("\t\t\t\t\t| %c | %c | %c |\n",arr[0],arr[1],arr[2]);
    printf("\t\t\t\t\t|---|---|---|\n");
    printf("\t\t\t\t\t| %c | %c | %c |\n",arr[3],arr[4],arr[5]);
    printf("\t\t\t\t\t|---|---|---|\n");
    printf("\t\t\t\t\t| %c | %c | %c |\n",arr[6],arr[7],arr[8]);
    printf("\t\t\t\t\t|---|---|---|\n");
    printf("\n\n");
}
int count = 0;
void play()
{
    char p,s;
    printf("\nEnter position and symbol for the player\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    count++;
    check(p,s);
}
void check(char P, char S)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]== P)
        {
            arr[i] = S;
        }
        
    }
    
}
int end()
{
    if ((arr[0]=='x' && arr[1] == 'x' && arr[2] == 'x') || (arr[0] == 'x' && arr[3] == 'x' && arr[6] == 'x') || (arr[0] == 'x' && arr[4] == 'x' && arr[8] == 'x'))
    {
        return(100);
    }
    else if ((arr[0]=='0' && arr[1] == '0' && arr[2] == '0') || (arr[0] == '0' && arr[3] == '0' && arr[6] == '0') || (arr[0] == '0' && arr[4] == '0' && arr[8] == '0'))
    {
        return(200);
    }
    else if (arr[1] == 'x' && arr[4] == 'x' && arr[7] == 'x')
    {
        return(100);
    }
    else if (arr[1] == '0' && arr[4] == '0' && arr[7] == '0')
    {
        return(200);
    }
    else if (arr[2] == 'x' && arr[5] == 'x' && arr[8] == 'x' || arr[2] == 'x' && arr[4] == 'x' && arr[6] == 'x')
    {
        return(100);
    }
    else if (arr[2] == '0' && arr[5] == '0' && arr[8] == '0' || arr[2] == '0' && arr[4] == '0' && arr[6] == '0')
    {
        return(200);
    } 
    else if (arr[3] == 'x' && arr[4] == 'x' && arr[5] == 'x')
    {
        return(100);
    }
    else if (arr[3] == '0' && arr[4] == '0' && arr[5] == '0')
    {
        return(200);
    } 
    else if (arr[6] == 'x' && arr[7] == 'x' && arr[8] == 'x')
    {
        return(100);
    }
    else if (arr[6] == '0' && arr[7] == '0' && arr[8] == '0')
    {
        return(200);
    }
    else 
    {
        return(300);
    }  
}
int main()
{
    int k;
    char ch;
    Start:
    system("cls");
    Welcome();
    show();
    Symbol();
    play();
    Label:
    system("cls");
    show();
    play();
    k = end();
    system("cls");
    show();
    if (count<9)
    {  
    if (k==100)
    {
        printf("\nPlayer 1 Won");
        count = 0;
    }
    else if (k==200)
    {
        printf("\nPlayer 2 Won");
        count = 0;
    }
    else
    {
        goto Label;
    }
    }
    else
    {
        printf("\nGame Draw:");
        count = 0;
    }
    printf("\nDo you want to play again: Enter y for Yes and n for No:");
    fflush(stdin);
    scanf("%c",&ch);
    if (ch == 'y' || ch == 'Y')
    {
        arr[0] = '1';
        arr[1] = '2';
        arr[2] = '3';
        arr[3] = '4';
        arr[4] = '5';
        arr[5] = '6';
        arr[6] = '7';
        arr[7] = '8';
        arr[8] = '9';
        goto Start;
    }
    printf("\nPress any key to exit");
    getch();
}