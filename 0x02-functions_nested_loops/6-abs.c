#include "main.h"
/**
 * _abs - primts  abbsolute
 * @c: parameter
 *
 * Return: returns abs
 */
int _abs(int c)
{
if  (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
