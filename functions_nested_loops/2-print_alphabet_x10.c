#include "main.h"
/**
 * print_alphabet_x10 - Imprime l'alphabet 10 fois.
 *
 * Description: Utilise deux boucles (imbriquées). La boucle extérieure
 * compte les 10 lignes, la boucle intérieure imprime les 26 lettres
 * Prototype: void print_alphabet_x10(void)
 */
void print_alphabet_x10(void)
{
int count;
char letter;
/* Boucle extérieure : de 0 à 9 (10 répétitions) */
for (count = 0; count < 10; count++)
{
/* Boucle intérieure : Imprime un alphabet complet */
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
/* Saut de ligne après chaque alphabet */
_putchar('\n');
}
}
