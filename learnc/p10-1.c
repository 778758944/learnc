////
////  p10-1.c
////  learnc
////
////  Created by xiaobo on 2017/11/22.
////  Copyright © 2017年 xiaobo. All rights reserved.
////
//
//#include <stdio.h>
//#define MONTHS 12
//#define YEARS 2
//int main(void){
//    const float rain[YEARS][MONTHS] = {
//        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.4, 2.4, 3.5, 6.6, 6.2},
//        {8.3, 8.2, 1.2, 1.6, 2.4, 5.0, 4.5, 3.3, 4.3, 4.0, 5.0, 3.0}
//    };
//
//    int year, month;
//    float subtot,total;
//
//    printf("year rainfall (inches)\n");
//    for(year = 0,total = 0; year < YEARS; year++){
//        for(month = 0,subtot = 0; month < 12; month++){
//            subtot = *((*(rain+year))+month);
//        }
//        total += subtot;
//        printf("%5d %15.1f\n",2000+year,subtot);
//    }
//
//
//    printf("the year avager is %.1f\n",total/YEARS);
//    printf("Monthly avager is:\n\n");
//    printf("Jan  Fen  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
//
//    for(month = 0; month < MONTHS; month++){
//        for(year = 0,subtot = 0; year < YEARS; year++){
//            subtot += *(*(rain+year)+month);
//        }
//        printf("%4.1f",subtot/YEARS);
//    }
//
//    printf("\n");
//    return 0;
//}

