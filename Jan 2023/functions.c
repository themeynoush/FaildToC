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
            strcpy (rec.team, word); 
        }
        if (pos == 5)
        {
            strcpy (rec.establishment, word); 
        }
        if (pos == 11)
        {
            strcpy (rec.name, word); 
        }
        pos++;
    }
}

int menuChoice() 
{
    int choice;

    printf(" \n \tWelcome! \n\n \tPlease choose an option:\n\n");
    printf("\tFor Ascending Alphabetic Sort by Name [1] \t Department  [2] \t Team [3] \t Establishment [4]\n\n");
    printf("\tFor Descending Alphabetic Sort by Name [5] \t Department [6] \t Team [7] \t Establishment [8] \n\n\t");
  
    scanf("%d", &choice);

    if (choice < 1 || choice > 6) {
        printf("Error! Run the program again and enter a valid value1\n");
        exit(EXIT_FAILURE);
    }

    return choice;
}