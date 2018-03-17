//
//  p14-4.c
//  
//
//  Created by xiaobo on 2018/3/8.
//
/*
#include <stdio.h>
#include <string.h>
typedef struct name {
    char fname[10];
    char mname[10];
    char lname[10];
} NAME;


typedef struct person {
    char number[12];
    NAME name;
} PERSON;

void showPerson(PERSON *);

int main(void) {
    char a[5];
    printf("%s", a);
    PERSON persons[2] = {
        {
            "12345",
            {
                .fname="Jack",
                .lname="Jones"
            }
        },
        {
            "1234567",
            {
                "Lional",
                "mes",
                "Messi"
            }
        }
    };
    
    showPerson(persons);
    return 0;
}

void showPerson(PERSON * arr){
    int i;
    char fname[10];
    char m[10] = "";
    for(i = 0; i < 2; i++) {
        if (arr[i].name.mname[0] != '\0') {
            char temp[3] = {arr[i].name.mname[0], '.', '\0'};
            strcpy(m, temp);
        }
        printf("%s %s %s - %s\n", arr[i].name.fname, arr[i].name.lname, m, arr[i].number);
    }
}
*/
























