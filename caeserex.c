#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
 
	stream = fopen("pass2.txt", "r");
	if (stream == NULL)
		exit(EXIT_FAILURE);
 
	while ((read = getline(&line, &len, stream)) != -1) {
		printf("Retrieved line of length %u :\n", read);
		printf("%s", line);
		printf("%c",line[1]);
	}
 
	free(line);
	fclose(stream);
	exit(EXIT_SUCCESS);
}