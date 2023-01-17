#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[40];
    char department[20];
    char team[20];
    char establishment[30];

} Personnel_t; //name of your definition type


//define a function for compareing the first property

int compareName(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->name, p2->name);
}

int compareDepartment(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->department, p2->department);
}

int compareTeam(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->team, p2->team);
}

int compareEstablishment(const void *pa,  const void *pb) 
{
    const Personnel_t *p1 = pa;
    const Personnel_t *p2 = pb;
    return strcmp(p1->establishment, p2->establishment);
}


int main()
{
    Personnel_t  records[] = { 
        {"Ali", "DH", "PhD stdudent", "IMT"},
        {"Xavier", "Ph", "researcher", "IMT"},
        {"Max", "DH", "PhD stdudent", "TTT"},
        {"Tina", "DH", "PhD stdudent", "IMT"},
        {"Alex", "DH", "reseracher", "TTT"},

    };
    int n = sizeof(records)/ sizeof(Personnel_t); //the number of elements

    qsort(records, n , sizeof(Personnel_t), compareName);
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %s %s", records[i].name, records[i].department, records[i].team, records[i].establishment);
        
        printf("\n");
    }
    
}
