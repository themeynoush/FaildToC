//This is inspired by serveur_TPH_ontology.py
//"A good function has a good description!"

//This is a practice from https://www.youtube.com/watch?v=PQF_IU2YXIg

//This function downloads the website's records into a file using "libcurl"
//Requirements: install curl
//Attention!
//curl is keg-only, which means it was not symlinked into /usr/local,
//because macOS already provides this software and installing another version in
//parallel can cause all kinds of trouble.

//If you need to have curl first in your PATH, run:
//  echo 'export PATH="/usr/local/opt/curl/bin:$PATH"' >> /Users/meynoush/.bash_profile

//For compilers to find curl you may need to set:
//  export LDFLAGS="-L/usr/local/opt/curl/lib"
//  export CPPFLAGS="-I/usr/local/opt/curl/include"

//For pkg-config to find curl you may need to set:
//  export PKG_CONFIG_PATH="/usr/local/opt/curl/lib/pkgconfig"
//After installing libcurl, we can use the liberaries and the functions 



#include <stdio.h>
#include <curl/curl.h> //This is the header file containing all the 
                       //functions we will need to download remote files


int main(int argc, char **argv) 
{
    CURL * curl; //First we need to create a Curl handle
                 //Which is going to be responsible for all the networking operations
    FILE *fp;    //declare a file pointer
    int result;  //the int that can tell if the download was successful or not
    fp = fopen (argv[2], "wb"); //use fopen for openning the file
                                //use the second argument as the name 
                                //open the file in write binary mode
    curl = curl_easy_init();    //initialize the handle, by calling the curl_easy_init(void) function
                                //which doesn't take any arguments
    curl_easy_setopt(curl, CURLOPT_URL, argv[1]); //curl_easy_setop is used to configure the handle 
                                        //use CURLOPT_ULR to specify the URL of the files that you want to download
                                        //instead of herdcoding the URL here, we use the first command line argument
                                        //that's pass to our program, to address the URL
    
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp); //specify the file where we want to store all the downloaded data and we pass a file pointer 

    curl_easy_setopt(curl, CURLOPT_FAILONERROR, 1L); //use this function to make the errors readable by human
   
    result = curl_easy_perform(curl); //Initiate the download by calling this function
                                      //It uses an integer value "result" that can tell if the download was successful or not.
   
    if (result == CURLE_OK)
        printf("\tDownload was successful!\n");
    else
        printf("ERROR: %s \n", curl_easy_strerror(result)); //to tell the user the exact error use curl_easy_strerror

    fclose(fp);  //close the file after the download is compelted 
    curl_easy_cleanup(curl);  //realease all the resources that curl handle is holding
}




