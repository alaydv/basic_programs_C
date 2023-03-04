#include <stdio.h>

/*enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};*/

enum deck 
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
} card;

int main()
{
    card = spades;
    /*enum weekDays today;
    today = Wednesday;
    printf("Today is: %d", today+1);*/
    printf("Value card is: %d\n", card);
    printf("Size of enum is: %d", sizeof(card));
    return 0;
}
