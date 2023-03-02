#include "main.h"

/**
 * rot13 - Encode a string using rot13 encryption
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
char *encoded = str;
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == rot13[j])
{
encoded[i] = rot13[(j + 13) % 52];
break;
}
else if ((str[i] >= 'A' && str[i] < 'N') || (str[i] >= 'a' && str[i] < 'n'))
{
encoded[i] = str[i] + 13;
break;
}
else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
{
encoded[i] = str[i] - 13;
break;
}
}
}

return (encoded);
}
