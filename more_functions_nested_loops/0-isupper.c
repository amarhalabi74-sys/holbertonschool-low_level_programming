#include "main.h"

/**
*prototype: _isupper 
*@c: lettre majuscule
*description: utilise if else
*retour 1 si majuscule retour 0 si minuscule
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
