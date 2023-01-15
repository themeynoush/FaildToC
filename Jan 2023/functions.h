#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _GNU_SOURCE 

FILE * fp;

typedef struct 
{
    char name[40];
    char department[30];
    char team[30];
    char establishment[40];
} Personnel_t;

void downloadData();
void openFile();
void getFields(char *line);




#endif
