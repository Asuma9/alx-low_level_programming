/**
 * _islower - determine alphabet is lower
 * @c: interger to be determined
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
