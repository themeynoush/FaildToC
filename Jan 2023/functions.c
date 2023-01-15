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
        printf("Error! Run the program again and enter a valid value\n");
        exit(EXIT_FAILURE);
    }

    return choice;
}

//defines a function for compareing the first property (Name)
int compareName(const void *pa,  const void *pb) 
{
    //put the value of pa in pointer p1
    const Personnel_t *p1 = pa;
    //put the value of pb in pointer p2
    const Personnel_t *p2 = pb;
    //Call the string compare function 
    return strcmp(p1->name, p2->name);
}

//defines a function for compareing the second property (Department)
int compareDepartment(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->department, p2->department);
}

//defines a function for compareing the third property (Team)
int compareTeam(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->team, p2->team);
}

//defines a function for compareing the forth property (Establishment)
int compareEstablishment(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->establishment, p2->establishment);
}

void sortByName() {
    qsort(records, n_rec , sizeof(Personnel_t), compareName);
}

void sortByEstablishment() {
    qsort(records, n_rec , sizeof(Personnel_t), compareEstablishment);
}
void sortByTeam()
{
    qsort(records, n_rec , sizeof(Personnel_t), compareTeam);
}
void sortByDepartment()
{
    qsort(records, n_rec , sizeof(Personnel_t), compareDepartment);
}

void printAscending() {
    for (int i = 0; i < n_rec; i++)
    {
        printf("%s %s %s %s", records[i].name, records[i].department, records[i].team, records[i].establishment);
        printf("\n");
    }
}

void printDescending() {
    for (int i = n_rec; i > -1 ; i--)
    {
        printf("%s\t%s\t%s\t%s", records[i].name, records[i].department, records[i].team, records[i].establishment);
        printf("\n");
    }
}
