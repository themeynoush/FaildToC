//using strtok function to isolate sequential tokens in a null-terminated string.
#include <stdio.h>
#include <string.h>
#include <xlocale.h>



int main()
{
char test[1000];
     //define a pointer for seperator called sep, type character
     char *sep = "<>";
     //define an integer for finding the position
     int pos = 0;
     //defining pointers
     char *word, *phrase, *brkt, *brkb;

     strcpy(test, "</div><div class=\"Searcher-category--summary\" onclick=\"location.href='/en/directory/abdel-nour-charbel'\">Faculty</div><div class=\"Searcher-establishment--summary\" onclick=\"location.href='/en/directory/abd    el-nour-charbel'\">IMT Atlantique</div></div><div class=\"Searcher--summary\"><div class=\"Searcher-title--summary\" onclick=\"location.href='/en/directory/abdillah-ali-thoihiri-mounadi'\"><a href=\"/en/directory    /abdillah-ali-thoihiri-mounadi\">ABDILLAH ALI THOIHIRI Mounadi</a></div><div class=\"Searcher-teams--summary\"><a href=\"/en/teams/m3/\" class=\"Tooltip--team\"  data-tooltip=\"Team of department IA &amp; Ocean\"     style=\"color: #38a2e0;\">");

     for (word = strtok_r(test, sep, &brkt);
          word;
          word = strtok_r(NULL, sep, &brkt))
     {
          //    printf("We're at position %d = %s\n", pos, word);
          if (pos ==2)
          {
               printf("team is %s\n", word);
          }
             pos++;
         }
    
}
//position 11 = name
//position 2 = Team 
//position 15  = Department?!
//position 5 = Establishment

