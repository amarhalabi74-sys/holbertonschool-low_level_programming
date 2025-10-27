#include "main.h"

/**
 * times_table - Imprime la table de multiplication de 9 (de 0x0 à 9x9).
 *
 * Description: Utilise des boucles imbriquées pour calculer i * j. 
 * Une logique conditionnelle complexe gère les espaces et l'alignement 
 * des nombres à 1 et 2 chiffres.
 * Prototype: void times_table(void);
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++) 
	{
		for (j = 0; j <= 9; j++) 
		{
			result = i * j;

			/* Gérer la virgule et l'espace APRÈS le chiffre, sauf à la fin */
			if (j != 0) 
			{
				_putchar(',');
				_putchar(' ');

				/* Alignement : si le résultat n'a qu'un chiffre, on ajoute un espace */
				if (result < 10)
					_putchar(' ');
			}

			/* IMPRESSION */
			if (result >= 10)
			{
				/* Imprimer la dizaine */
				_putchar((result / 10) + '0');
			}
			
			/* Imprimer l'unité */
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
