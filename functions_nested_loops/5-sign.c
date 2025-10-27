#include "main.h"
/**
 * _isalpha - Vérifie si un caractère est alphabétique.
 * @c: Le caractère à vérifier.
 *
 * Description: Utilise l'opérateur OR (||) pour vérifier si 'c' est 
 * dans la plage minuscule OU dans la plage majuscule.
 * Return: 1 si 'c' est une lettre, 0 sinon.
 * Prototype: int _isalpha(int c);
 */
int print_sign(int n)
 {
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
 }