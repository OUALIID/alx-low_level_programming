#ifndef PIPLO_H
#define PIPLO_H
int _putchar(char c);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
