#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int main()
{
    int number,userno,a,count=5;
    while (count>0)
    {
            printf("Enter any number: ");
            scanf("%d",&userno);
            srand(time(NULL));
            number = rand() % 101;
            printf("\n\n\t\t\tComputer Loading\n\n");
            for (a=0;a<10;a++)
            {
                Sleep(100);
                printf(".....");
            }

            if (number == userno)
            {
                printf("\n\nWow...... You win!!\n");
                printf("Co,mputer number is: %d\n\n",number);
                break;
            }

            else
            {
                printf("\n\nSorry... Wrong Number Guessed");
                printf("\n\nComputer number is: %d\n\n",number);
            }
    count--;
    printf("\n%d time remaining\n\n",count);
    }
    printf("\n\n\n\t\t\tGAME OVER\\n\n\n");
getch();
}