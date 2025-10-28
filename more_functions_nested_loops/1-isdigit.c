#include "main.h"

/**
*prototype: int _isdigit(int c)
*@c: chiffre ou lettre
*description: utilise if / else
*retourne 1 si chiffre, sinon 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')	
		return (1);
	else
		return (0);
}
