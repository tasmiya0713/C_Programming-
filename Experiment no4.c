/* Name: TASMIYA HASEEN SHAIKH
UIN:251C020
CLASS:CIVIL
DIV:B */
#include <stdio.h>
int main()
{
    int start, end, i, j, count;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        if(i < 2)
            continue;  

        count = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}
    
