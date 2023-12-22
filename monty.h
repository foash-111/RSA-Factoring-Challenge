#ifndef MAIN_H
#define MAIN_H
#define _GNU_SOURCE

#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

void enter_file(FILE *my_file);


void factors(char *str);
unsigned long int _atoi(char *s);


char **tokanized_array(char *str);
void free_all_array(char **arr);

#endif
