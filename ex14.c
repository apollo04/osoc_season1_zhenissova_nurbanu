#include <stdio.h>
#include <ctype.h>

	int can_print_it(char ch);
	void print_letters(char arg[]);
	void printf_arguments(int argc, char *argv[])
	{
		int i = 0;
		for(i = 0; i<argc; i++) {
			print_letters(argv[i]);
	
