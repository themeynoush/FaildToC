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

// int isDataLine()
// {

// }