#include <stdio.h>

void GoodMorning();
void GoodAfterNoon();
void GoodNight();

int main()
{
    GoodMorning();
    return 0;
}

void GoodMorning()
{
    printf("Hello Yash GoodMorning\n");
    GoodAfterNoon();
}
void GoodAfterNoon()
{
    printf("Hello Yash GoodAfterNoon\n");
    GoodNight();
}
void GoodNight()
{
    printf("Hello Yash GoodNight\n");
}