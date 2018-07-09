/**
 * leet - This function encodes a string into 1337
 * @s: String to evaluate
 * Return: Converted string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "oOlL22eEaA5566tT";

	/* loop through the string and evaluate each character */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* check to see if s[i] matches any leet chars */
		for (j = 0; j < 16; j++)
			/* if a match is found, convert char */
			if (s[i] == leet[j])
				s[i] = j / 2 + '0';
	}

	/* return the converted string */
	return (s);
}
