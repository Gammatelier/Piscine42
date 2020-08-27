#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char source[] = "Toto va a la plage"; //taille 18
	char dest[30] = "Demain, "; //taille 8
	char dest2[30] = "Demain, "; //taille 8
	int x;
	int y;
	char *pointer;
	char *pointer2;
	pointer = strncat(dest, source, 10);
	pointer2 = ft_strncat(dest2, source, 10);
	x = strlen(dest);
	y = strlen(dest2);
	printf("%s - %d - %s\n", pointer, x, dest);
	printf("%s - %d - %s\n", pointer2, y, dest2);
}
