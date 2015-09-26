#include <stdio.h>

int main(int argc, char *argv[])
{
	char *planet;
	if (argc==2) planet=argv[1]; else planet="world";
	printf("Hello %s!\n",planet);
}
