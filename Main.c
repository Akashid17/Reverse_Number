
#include<stdio.h>

void ReverseNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        printf("%d",iNo%10);

        iNo /= 10;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    ReverseNumber(iValue);

    return 0;
}