
#ifndef FILE_MAIN_H
#define FILE_MAIN_H
int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int string_length(char *pointer);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif
