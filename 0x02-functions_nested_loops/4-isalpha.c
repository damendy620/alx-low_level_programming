/**
 * _isalpha - check if is lower or upper
 * @c: character
 *
 * Return: 1 if c is lower or upper
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
