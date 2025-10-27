#include "main.h"
/**
 * _islower - Vérifie si un caractère est en minuscule.
 *
 * Description: Utilise l'opérateur AND (&&) pour vérifier si 'c' est
 * dans la plage des minuscules ASCII.
 * Return: 1 si 'c' est une minuscule, 0 sinon.
 * Prototype: int _islower(int c);
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
