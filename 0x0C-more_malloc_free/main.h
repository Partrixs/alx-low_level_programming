#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _is_zero(char *argv[]);
char *_initialize_array(char *ar, int lar);
int _checknum(char *str);
void perform_multiplication(char *argv[], char *nout, int ln1, int ln2);
void handle_overflow(char **nout, int *lnout);

#endif
