#include "main.h"

/**jack_bau
 * jack_bauer - Imprime chaque minute du jour, de 00:00 à 23:59.
 *
 * Description: Utilise des boucles imbriquées pour les heures (0-23) et 
 * les minutes (0-59), et l'arithmétique pour décomposer et imprimer 
 * chaque chiffre.
 * Prototype: void jack_bauer(void);
 */
void er(void)
{
	int h, m; /* h pour heure, m pour minute */

	/* Boucle H : 0 à 23 */
	for (h = 0; h < 24; h++)
	{
		/* Boucle M : 0 à 59 */
		for (m = 0; m < 60; m++)
		{
			/* Affiche la dizaine d'heure */
			_putchar((h / 10) + '0');
			/* Affiche l'unité d'heure */
			_putchar((h % 10) + '0');

			_putchar(':'); 

			/* Affiche la dizaine de minute */
			_putchar((m / 10) + '0');
			/* Affiche l'unité de minute */
			_putchar((m % 10) + '0');

			_putchar('\n'); 
		}
	}
}
