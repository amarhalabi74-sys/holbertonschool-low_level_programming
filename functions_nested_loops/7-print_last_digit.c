#include "main.h"

/**
 * print_last_digit - Imprime et retourne le dernier chiffre d'un nombre.
 * @n: Le nombre entier.
 *
 * Description: Utilise l'opérateur modulo (%) pour trouver le dernier chiffre. 
 * Gère les valeurs négatives en utilisant _abs ou une condition.
 * Return: La valeur du dernier chiffre (toujours positive).
 * Prototype: int print_last_digit(int);
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
