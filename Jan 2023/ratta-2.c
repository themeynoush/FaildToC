/*
This program demonstrates how to retrieve
 an array from a webpage using wget and sort the array in ascending order 
 based on a specified property
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 1000


int compare(void *a, void *b) 
{
    char *x = *(char**)a;
    char *y = *(char**)b;

    // Extract the value of the specified property from x and y
    char *property_x = strtok(x, ",");
    char *property_y = strtok(y, ",");
    int i = 1;
    //how to define properties
    while (i < property_index) {
        property_x = strtok(NULL, ",");
        property_y = strtok(NULL, ",");
        i++;
    }

    // Compare the values of the specified property
    return strcmp(property_x, property_y);
}

int main(int argc, char *argv[]) {
    char *array[ARRAY_SIZE];
    int num_elements = 0;
    int property_index = 0;

    if (argc > 1) {
        // Convert the command-line argument to an integer
        property_index = atoi(argv[1]);
    }

    // Retrieve the webpage using wget
    system("https://labsticc.fr/en/directory");

    // Open the downloaded file for reading
    FILE *fp = fopen("array.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file line by line
    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        // Check if the line contains the start of an array element
        if (strstr(line, "[") != NULL) {
            // Tokenize the line using strtok
            char *token = strtok(line, "[,]");
            // Add the element to the array
            array[num_elements++] = strdup(token);
        }
    }

    // Close the file
    fclose(fp);

    // Sort the array in ascending order using qsort and compare
    qsort(array, num_elements, sizeof(char*), compare);

    // Print the sorted array
    for (int i = 0; i < num_elements; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}
