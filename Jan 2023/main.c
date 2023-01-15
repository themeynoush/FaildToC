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


//Calls definition function
Personnel_t records[1000];
int n = 0;


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
            records[n] = rec; // save record.
            n++;
        }
    }

    int sort_option = menuChoice();

    printf("done\n");
}