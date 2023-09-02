/**
 **clear_bit - func sets value of bit to zero (0)
 **@n: pointer reference to bit to be cleared
 **@index: index of bit position to be cleared
 **Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(*n) * 8)
		return (-1);
	bit = 1; /* set all bits to 1 */

	*n = *n & ~(bit << index); /* invert the bits by masking*/
	return (1);
}
