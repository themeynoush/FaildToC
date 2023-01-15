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

Personnel_t rec;
Personnel_t records[1000];
int n_rec;


void downloadData();
void openFile();
void getFields(char *line);
int menuChoice();
int compareName(const void *pa,  const void *pb); 
int compareDepartment(const void *pa,  const void *pb);
int compareTeam(const void *pa,  const void *pb);
int compareEstablishment(const void *pa,  const void *pb);

void sortByName();
void sortByEstablishment();
void sortByTeam();
void sortByDepartment();

void printAscending();
void printDescending();

#endif
