#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[])
{
	char buffer1[10] = {0,};
	char buffer2[10] = {0,};

	if (argc >1)
	{
		strcpy( buffer2, argv[1]);

	}

	printf("buffer1: %s\n", buffer1);
	printf("buffer2: %s\n", buffer2);

	return 0;
}
