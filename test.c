#include <stdio.h>

int main(int argc, char *argv[])
{
	char *planet;
	planet=(argc==2 ? argv[1]:"world");
	printf("Hello %s!\n",planet);
}
