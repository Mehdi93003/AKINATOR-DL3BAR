#include <stdio.h>
#include <time.h>

int main()
{
    int  random_num;
    const int MAX = 30,MIN = 4;
    char sign_1 =174,sign_2 = 175,division_sign=246,ask;

jump:
    srand(time(NULL));
    random_num = (rand() % (MAX - MIN + 1)) + MIN;

    if(random_num%2!=0){
        ++random_num;
    }

    printf("\t\t\a*WELCOME BACK TO MY SECOND GREAT PROJECT*\n\n");
    printf("\t\t     %c AKINATOR DL3BAR  V0.01 Beta %c\n\n",sign_1,sign_2);

    printf(" * Press ENTER To Start... ");
    while( getchar() != '\n' );

    printf("\n\n   # Think Of A Number In Your Mind... (Don't Say It Out Loud,I Hear You).");
    while( getchar() != '\n' );

    printf("\n   # Multiply The Chosen Number By 2 (Chosen Num x 2 = Result).");
    while( getchar() != '\n' );

    printf("\n   # Hmm, Add %d To The Result (Result + %d = Result_1).",random_num,random_num);
    while( getchar() != '\n' );

    printf("\n   # Divide Result_1 By 2 (Result_1 %c 2 = Result_2).",division_sign);
    while( getchar() != '\n' );

    printf("\n   # Now Subtract The First Number You Chose From Result_2 ");
    printf("\n     (Result_2 - Chosen Num = The Final Result ).");
    while( getchar() != '\n' );

    printf("\n * Ready To See If The Computer Found The Final Result... ");
    while( getchar() != '\n' );

    printf("\n\n\t\t   --> The Final Result Is : (%d) <--\n\n",random_num/2);
    printf("\t\t     (TLEB TSLIM MN MALIN LMKAN!!)\n\n\n");

    ask=NULL;
  while(ask!=89 && ask!=121 && ask!=78 && ask!=110){

        printf("* Try Again ?  [YES] : Y , [NO] : N --> ");
        scanf(" %c",&ask);
        printf("\n\n");
        printf(" ------------------------------------------------------------------------------\n");

        if (ask == 89 || ask == 121){
            goto jump;
        }

        else if (ask==78 && ask==110){
            break;
        }
    }
    getch();
    return 0;
}
