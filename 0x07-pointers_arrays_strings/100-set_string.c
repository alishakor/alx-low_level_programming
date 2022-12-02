#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.(source address)
 * @to: The char.(target address)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
