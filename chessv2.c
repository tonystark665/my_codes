#include<stdio.h>


int main()
{
    char board[8][8];
        char choice;
    int i,j,i1,i2,ch;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            board[i][j]='*';
        }
    }

    printf("\n\n**********ENTER THE INITIAL POSITION OF THE HORSE OR KNIGHT:_____ 1,1 to 8,8\n\n");
    scanf("%d,%d",&i,&j);
        i--;
        j--;
    board[i][j]='K';


    printf("\nCHESS BOARD:\n");
    for(i1=0;i1<8;i1++)
    {
        for(i2=0;i2<8;i2++)
        {
            printf("%c  ",board[i1][i2]);
        }
        printf("\n");
    }



    printf("\nPossible moves for the knight are:\n\n");

//top part of the piece
    if(i-2>=0)
    {
        if(j-1>=0)
        {
        printf("%d,%d\n",i-1,j);
        board[i-2][j-1]='O';
        }
        if(j+1<=7)
        {
        printf("%d,%d\n",i-1,j+2);
        board[i-2][j+1]='O';
        }
        if(j-2>=0)
        {
         printf("%d,%d\n",i,j-1);
        board[i-1][j-2]='O';

        if(i-1>=0)
        {
            printf("%d,%d",i,j-1);
            board[i-1][j-2]='O';
        }
        if(i+1<=7)
        {
            printf("%d,%d",i+2,j-1);
            board[i+1][j-2]='O';
        }

        }

        if(j+2<=7)
        {
        printf("%d,%d\n",i,j+3);
        board[i-1][j+2]='O';

        if(i-1>=0)
        {
            printf("%d,%d",i,j+3);
            board[i-1][j+2]='O';
        }
        if(i+1<=7)
        {
            printf("%d,%d",i+2,j+3);
            board[i+1][j+2]='O';
        }

        }
    }





        //bottom part of the piece

        if(i+2<=7)
    {
        if(j-1>=0)
        {
         printf("%d,%d\n",i+3,j);
        board[i+2][j-1]='O';
        }
        if(j+1<=7)
        {
        printf("%d,%d\n",i+3,j+2);
        board[i+2][j+1]='O';
        }
        if(j-2>=0)
        {
        printf("%d,%d\n",i+2,j-1);
        board[i+1][j-2]='O';

        if(i-1>=0)
        {
            printf("%d,%d",i,j-1);
            board[i-1][j-2]='O';
        }
        if(i+1<=7)
        {
            printf("%d,%d",i+2,j-1);
            board[i+1][j-2]='O';
        }

        }
        if(j+2<=7)
        {
         printf("%d,%d\n",i+2,j+3);
        board[i+1][j+2]='O';

        if(i-1>=0)
        {
            printf("%d,%d",i,j+3);
            board[i-1][j+2]='O';
        }
        if(i+1<=7)
        {
            printf("%d,%d",i+2,j+3);
            board[i+1][j+2]='O';
        }

        }


    }


    //printing the possibilities;

        printf("\n\n");
            for(i1=0;i1<8;i1++)
            {
                for(i2=0;i2<8;i2++)
                {
                    printf("%c   ",board[i1][i2]);
                }
                printf("\n\n");
            }

            printf("\n\n");
return 0;
}
