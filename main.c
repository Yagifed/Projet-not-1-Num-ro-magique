#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int guess;
    while (random_number != guess) 
    {
        printf("Choisissez un nombre entre 1 et 100 : ");
        scanf("%d", &guess);
        if (guess > random_number)
        {
            printf("Plus petit.\n");
        } 
        else if (guess < random_number) 
        {
            printf("Plus grand.\n");
        }
        else 
        {
            printf("Félicitations ! Vous avez trouvé le nombre secret.\n");
        }
    }
    return 0;
}