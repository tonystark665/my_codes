//this is a program to find out the amount of money u owe each other after a series of spending by you and your friends.
//debug and optimize this code.

#include<stdio.h>
#include<malloc.h>
main()
{
    int number_of_friends;
    int i,j,a;    //looping variables.
    printf("Enter number of friends.\n\n");
    scanf("%d",&number_of_friends);
    char *names=(char*)malloc(number_of_friends*sizeof(char));
    printf("Enter the Names of the friends.\n\n");
    for(i=0;i<number_of_friends;i++)
    {
        scanf("%s",&names[i]);
    }

    float matrix[50][50];

    for(i=0;i<number_of_friends;i++)
    {
        for(j=0;j<number_of_friends;j++)
        {
            matrix[i][j]=0;
        }
    }
    int choice;
    char spender_name;
    int spender_id;
    float amount_spent;
    float owed_amount;

    printf("Enter your choice:\n1 to add an expence\n2 to show the table\n3 to exit the program\n\n");
    scanf("%d",&choice);
    while(choice)
    {
        switch(choice)
        {
        case 1:
            printf("Enter the name of the person spending : ");
            scanf("%s",&spender_name);
            for(a=0;a<number_of_friends;a++)
            {
                if(names[a]==spender_name)
                    break;
            }
            spender_id=a;
            printf("Enter the amount spent by %s : ",&spender_name);
            scanf("%f",&amount_spent);
            owed_amount=amount_spent/(float)number_of_friends;
            for(i=0;i<number_of_friends;)
            {
                if(i==spender_id)
                {
                    i++;
                }
                else
                {
                if(matrix[spender_id][i]!=0)

                {
                    if(owed_amount-matrix[spender_id][i]>=0)
                    {
                        matrix[i][spender_id]+=owed_amount-matrix[spender_id][i];
                        matrix[spender_id][i]=0;
                        i++;
                    }
                    else
                    {
                        matrix[spender_id][i]=matrix[spender_id][i]-owed_amount;
                        matrix[i][spender_id]=0;
                        i++;
                    }
                }
                else
                {
                    matrix[i][spender_id]+=owed_amount;
                    i++;
                }
                }

            }

            printf("Enter your choice:\n1 to add an expence\n2 to show the table\n3 to exit the program\n\n");
            scanf("%d",&choice);
            break;
        case 2:
            printf("\n");

            /*for(i=0;i<number_of_friends;i++)
            {
                printf("%s\t",names[i]);
            }*/
            //not working :(

            for(i=0;i<number_of_friends;i++)
            {
                for(j=0;j<number_of_friends;j++)
                {
                    printf("%.0f\t",matrix[i][j]);
                }
                printf("\n");
            }
            printf("\nEnter your choice:\n1 to add an expence\n2 to show the table\n3 to exit the program\n\n");
            scanf("%d",&choice);
            break;
        default:
            printf("enter a valid value\n");
            printf("\nEnter your choice:\n1 to add an expence\n2 to show the table\n3 to exit the program\n\n");
            scanf("%d",&choice);
            break;
        }
    }
}
