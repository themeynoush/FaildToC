//download website

#import "functions.h"

void downloadData() {
    system("wget --quiet --output-document=web-site-source.txt https://labsticc.fr/en/directory");
}

//Opens the .txt file
//Exits if the file didn't exist
void openFile()
{
    fp = fopen("web-site-source.txt", "r"); 
    if (fp == NULL)
        exit(EXIT_FAILURE);
}

void getFields(char *line)
{
    int pos = 0;
    char *word, *brkt;
    char *sep = "<>";
    
    for (word = strtok_r(line, sep, &brkt); word; word = strtok_r(NULL, sep, &brkt))
    {
        // printf("We're at position %d = %s\n", pos, word);
        if (pos == 2)
        {
            //printf("team is %s\t\t", word);
            strcpy (rec.team, word);  
            printf("Team: %s\n", rec.team);
        }
        if (pos == 5)
        {
            //printf("Establishment is %s\t\t", word);
            strcpy (rec.establishment, word);  
            printf("Establishment: %s\n", rec.establishment);
        }
        if (pos == 11)
        {
            //printf("Name %s\t\t", word);
            strcpy (rec.name, word);  
            // printf("\n*****************\n");
            printf("Name:  %s\n", rec.name);
        }
        pos++;
    }
}