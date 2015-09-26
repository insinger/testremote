#include <stdio.h>

int main(int argc, char *argv[])
{
	char *planet;
	planet=(argc==2 ? argv[1]:"World");
	printf("Hello %s!\n",planet);
}
