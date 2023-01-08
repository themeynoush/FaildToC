#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _GNU_SOURCE 

int main() 
{
    // Retrieve the webpage using wget
    system("wget --quiet --output-document=web-site-source.txt https://labsticc.fr/en/directory");
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    // Open the downloaded file for reading
    FILE *fp = fopen("web-site-source.txt", "r");


    if (fp == NULL) 
    {
        exit(EXIT_FAILURE);
    //     perror("Cannot open the file!");
    //     return 0;
    // }
    // else
    //     printf("Download successful!\n");

    //read file
    while ((read = getline(&line, &len, fp)) !=-1)
    {
        printf("Retrieved line of length %zu:\n",  read);
    }

    fclose(fp);
    if (line)
        free (line);
    exit(EXIT_FAILURE);
    }
}