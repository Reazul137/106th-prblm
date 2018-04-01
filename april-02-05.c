#include<stdio.h>
int main()
{
    int cprice, sprice, plamt;

    printf("Input the cost price : ");
    scanf("%d",&cprice);

    printf("Input the sell price : ");
    scanf("%d",&sprice);

    if(sprice > cprice)
    {
        plamt = sprice - cprice;
        printf("\n You can booked your profit amount : %d\n",plamt);
    }
    else if (cprice > sprice)
    {
        plamt = cprice - sprice;
        printf("\n You got a lose amount : %d",plamt);
    }
    else
    {
        printf("\nYou are running in no profit no loss condition.\n");
    }

    return 0;
}
