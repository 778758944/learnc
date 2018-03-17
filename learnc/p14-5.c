//
//  p14-5.c
//  
//
//  Created by xiaobo on 2018/3/8.
//
/*
#include <stdio.h>
#include <string.h>

struct name {
    char fname[10];
    char lname[10];
};

typedef struct student {
    struct name name;
    float grade[3];
    float average;
} STUDENT;

void showStudent(STUDENT *);
void showAverageInClass(STUDENT *);

int main(void) {
    STUDENT arr[2] = {
        {
            {
                .lname="Ronaldo",
            },
        },
        {
            {
                .lname="Messi",
            },
        }
    };
    int i = 0;
    int count;
    char name[12] = "";
    puts("enter name");
    while(i < 2 && gets(name)) {
        for (count = 0; count < 2; count++) {
            if (strcmp(name, arr[count].name.lname) == 0) {
                puts("enter scores");
                scanf("%f%f%f", arr[count].grade, arr[count].grade+1, arr[count].grade+2);
                while(getchar() != '\n'){
                    continue;
                }
                i += 1;
            }
        }
        puts("enter again");
    }
    
    for(count = 0; count < 2; count ++){
        arr[count].average = (arr[count].grade[0] + arr[count].grade[1] + arr[count].grade[2])/3;
    }
    showStudent(arr);
    showAverageInClass(arr);
    return 0;
}

void showStudent(STUDENT * arr){
    int i;
    for(i = 0; i < 2; i++){
        printf("%s average is %.2f\n", arr[i].name.lname, arr[i].average);
    }
}

void showAverageInClass(STUDENT * arr) {
    float t1 = 0,
          t2 = 0,
          t3 = 0;
    int i;
    for(i = 0; i < 2; i++){
        t1 += arr[i].grade[0];
        t2 += arr[i].grade[1];
        t3 += arr[i].grade[2];
    }
    
    printf("average is %.2f %.2f %.2f\n", t1/2, t2/2, t3/2);
}
 */
















