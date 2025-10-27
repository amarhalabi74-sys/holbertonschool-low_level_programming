#include "main.h"

/**
 * print_alphabet - Imprime l'alphabet en minuscules.
 *
 * Description: Utilise une boucle 'for' qui itère sur la plage ASCII des 
 * lettres minuscules, de 'a' jusqu'à 'z'.
 * Prototype: void print_alphabet(void)
 */
void print_alphabet(void)
{
	char letter; /* On stocke le caractère */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
  		_putchar(letter);
	}
	_putchar('\n');
}
