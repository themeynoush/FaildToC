#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//parameters for sorting
typedef struct 
{
    char name[35];
    char department[20];
    char team[20];
    char establishment[35];

} Personnel_t; //name of your definition type



int main(void)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    //strstr variable
    const char *identifier = "Searcher-category--summary"; //needle


    
    //strtok variables
    //define a pointer for seperator called sep, type character
    char *sep = "<>";
    //define an integer for finding the position
    int pos = 0;
    //defining pointers
    char *word, *phrase, *brkt, *brkb;
    char test[1000];
    
    Personnel_t  records[1000];
    int n = 0;

    fp = fopen("web-site-source.txt", "r"); //open the file
    if (fp == NULL)
        exit(EXIT_FAILURE);

        
    //Get line as long as there is line to read (The length of the last line is -1)
    while ((read = getline(&line, &len, fp)) != -1) 
    {

        //printf("Retrieved line of length %zu:\n", read); 
        if (strstr(line, identifier))
        {
           // printf("%s", line);
            
            strcpy(test, line);


            for (word = strtok_r(test, sep, &brkt); word; word = strtok_r(NULL, sep, &brkt))
            {
                // printf("We're at position %d = %s\n", pos, word);

                if (pos == 2)
                {
                    printf("team is %s\t\t", word);
                    strcpy (records[n].team, word);  
                    printf("Team %s\n", records[n].team);
                }
                    
                // if (pos == 5)
                // {
                //     printf("establishment is %s\t\t", word);
                //     strcpy (establishment, word);  
                //     printf("establishment %s\n", establishment);
                // }

                // else if (pos == 11)
                // {
                //     printf("name is %s\t\t", word);
                //     strcpy (name, word);  
                //     printf("name %s\n", name);
                // }
                pos++;
            } //end of strtok for 
            pos = 0;
            n++;

            //printf("%s, %s, %s", team, establishment, name);


        } //end of strstr if
    } //end of main while

    //close thhe file and free lines
    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);


}