#include <stdio.h>

int main()
{
    int maxNum;

    printf("\nWhat's the maximum number? ");
    scanf("%d", &maxNum);

    for(int i = 1; i <= maxNum; i++)
    {
        if(i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}