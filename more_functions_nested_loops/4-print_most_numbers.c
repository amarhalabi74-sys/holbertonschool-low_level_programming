#include "main.h"

/**
* print_most_numbers - Imprime les chiffres de 0 à 9 (sauf 2 et 4).
 *
 * Description: Utilise la boucle for et l'instruction 'continue' 
 * pour sauter les itérations où le chiffre est 2 ou 4.
 * La fonction utilise _putchar exactement deux fois.
 * Prototype: void print_most_numbers(void);
*/

void print_most_numbers(void)
{
	int i;
	for(i = 0; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}	
	_putchar('\n');
}
