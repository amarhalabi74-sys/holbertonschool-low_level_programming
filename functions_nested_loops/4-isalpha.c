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
int _isalpha(int c)
{
	/* (Minuscule ET minuscule) OU (Majuscule ET majuscule) */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); 
	}
	else
	{
		return (0); 
	}
}
