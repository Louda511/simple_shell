#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	ssize_t r;
	size_t len = 0;
	char *line = NULL;
	//while(1)
	//{
	printf("$ ");
	r = getline(&line, &len, stdin);
	printf("$ %s", line);
	//}
	free(line);


	return(r);
}


	
