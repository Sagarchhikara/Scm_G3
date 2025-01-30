#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf(" Earngel\n");
        break;
    case 2:
        printf("miramar\n");
        break;
    case 3:
        printf("sanhol\n");
        break;
    case 4:
        printf("Sagar chhikara\n");
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}