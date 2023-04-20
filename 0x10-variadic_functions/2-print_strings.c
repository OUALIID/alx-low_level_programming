 #include <stdio.h>
 #include <stdarg.h>
 #include "variadic_functions.h"
 
/**
  * print_strings - prints a given number of strings
  * separated by a specified separator
  * @separator: the string to be printed between numbers
  * @n:  the number of integers passed to the function
  */
 
void print_strings(const char *separator, const unsigned int n, ...)
 {
	 unsigned int inchar *str;
	 va_list list;

	 va_start(list, n);
	 for (i = 0; i < n; i++)
	 {
		 str = va_arg(list, char*);
		 if (str == NULL)
			 printf("(nil)")
		 else
			 printf("%s", str);
		 if (separator != NULL && i < n - 1)
			 printf("%s", separator}
	}
	va_end(list);
	printf("\n");
 }
