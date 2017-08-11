#include <stdio.h>
#include <errno.h>
#include "Filer.h"

int main()
{
	Filer read;
	read.writeIt("Vertex.vert", "Jee Wizz");
	const char* output = read.printIt("Vertex.vert");
	printf("%s", output);
	return 0;
}
