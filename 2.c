#include <stdio.h>
int main()
{
    double d;

    printf("Enter d value: ");
    scanf("%lf", &d);

    if (d <= 0.0)
    {
        if (d == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
