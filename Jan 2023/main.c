#import "functions.h"

// definese a pointer called line
char * line = NULL;
// represents the size of an allocated block of memory. 
// similar to a sizieof operator and strlen function
size_t len = 0;  
// ssize_t = “signed size_t”.
ssize_t read;
// strstr variable
const char *identifier = "Searcher-category--summary"; //The needle

int n_rec = 0;


// Personnel_t rec;

int main() {
    //downlaods
    downloadData();
    //opens the file
    openFile();
    
    //check datalike using strstr fuction
    while ((read = getline(&line, &len, fp)) != -1) {
        //if you found the identifier in line, print the following:
        if (strstr(line, identifier)) {
            getFields(line); // save data to rec.
            records[n_rec] = rec; // save record.
            n_rec++;
        }
    }

    int sort_option = menuChoice();

    printf("done\n");

    switch (sort_option)
    {
    case 1:
        sortByName();
        printAscending();
        break;

    case 2:
        //code
        break;

    case 3:
        //code
        break;
    
    case 4:
        //code
        break;
    
    case 5:
        //code
        break;

    case 6:
        //code
        break;
    }
}