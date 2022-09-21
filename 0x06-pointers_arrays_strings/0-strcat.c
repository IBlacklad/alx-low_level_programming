#include "main.c"



int main()
{

	char src[50]= "wow its true";
	char dest[50]= "add to";


	_strcat(dest, src, 15);

	printf("Destination String is : %s \n", dest);

	return 0;

}
