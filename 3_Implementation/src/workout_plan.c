/**
 * @file workout_plan.c
 * @author Ajith V
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "workout_plan.h"
#include <stdio.h>
#include <unistd.h>
/**
 * @brief Set of workouts researched and assigned to different weight status
 * 
 */
void timer_10(){
    for(int i=1; i<=10; i++)
    {
        printf("\n                                         %d\n",i);
        if(i==5){
            printf("\n Walk");
        }
        
        sleep(1);
    }}
void timer_30(){
    for(int i=1; i<=30; i++)
    {
        printf("\n                                           %d\n",i);
        if(i==5){
            printf("\n You are strong");
        }
        if(i==15){
                printf("\n Half time");
        }
        sleep(1);
    }}
void workout_1(void)
{   
    printf("\n Generating a special workout plan \n");
    sleep(2);
    printf("\nIts a special workout plan for under weight. \n lets begin");
    sleep(1);
    printf("\nJUMPING JACKS");
    sleep(1);
    printf("\nDo for 30 sec");
   // timer_1();
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PUSH UPS");
    sleep(1);
    printf("\nDo for 30 sec");
   // timer_1();

    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PULL UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT SQUATS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nUP NEXT LUNGES");
    sleep(1);
    printf("\n Do it for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nCRUNCHES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("Voila That's it for today");
    sleep(1);
    printf("Stay healthy Cheers");
}

void workout_2()
{   
    printf("\nYou're good  but as you know never settle for good be better\n Let's work on strengthening");
    printf("\nIts a special workout plan for Normal. \n lets begin");
    sleep(1);
    printf("\nJUMPING JACKS");
    printf("\nDo for 30 sec");
    sleep(1);
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PUSH UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PULL UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT SQUATS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
   
    sleep(1);
    printf("\nUP NEXT LUNGES");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nJUMPING LUNGES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nBURPEE");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nCRUNCHES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();

    printf("Voila That's it for today");
    sleep(1);
    printf("Stay healthy Cheers");
}

void workout_3()
{
    printf("\n Warning You are losing shape, Do something today that your future self will thank you for");
    sleep(2);
    printf("\nIts a special workout plan for Overweight. \n lets begin");
    sleep(2);
    printf("\nJUMPING JACKS");
    sleep(1);
    printf("\nDo for 30 sec");
    sleep(1);
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PUSH UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PULL UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT SQUATS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
   
    sleep(1);
    printf("\nUP NEXT LUNGES");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nJUMPING LUNGES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nBURPEE");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nCRUNCHES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPLANK");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPUSHUPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\n");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
     printf("Voila That's it for today");
    sleep(1);
    printf("Stay healthy Cheers");
}

void workout_4()
{
    printf("\n Wake up dear friend Still not lat TRAIN INSANE OR REMAIN THE SAME");
    printf("\nIts a special workout plan for Overweight. \n lets begin");
    sleep(1);
    printf("\nJUMPING JACKS");
    printf("\nDo for 30 sec");
    sleep(1);
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PUSH UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PULL UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT SQUATS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
   
    sleep(1);
    printf("\nUP NEXT LUNGES");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nJUMPING LUNGES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nBURPEE");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nCRUNCHES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPLANK");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPUSHUPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\n");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
     printf("Voila That's it for today");
    sleep(1);
    printf("Stay healthy Cheers");
}

void workout_5()
{
   printf("\n Dear friend, Everything is possible,\n");
   sleep(1);
   printf("\nLosing weight is Hard, Being fat is HARD, Choose your hard");
   sleep(1);
    printf("\nIts a special workout plan for Overweight. \n lets begin");
    sleep(1);
    printf("\nJUMPING JACKS");
    printf("\nDo for 30 sec");
    sleep(1);
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PUSH UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT PULL UPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nNEXT SQUATS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
   
    sleep(1);
    printf("\nUP NEXT LUNGES");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nJUMPING LUNGES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nBURPEE");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nCRUNCHES");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPLANK");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\nPUSHUPS");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
    printf("\n");
    sleep(1);
    printf("\nDo for 30 sec");
    printf("\n\nSTART\n");
    timer_30();
    printf("\n\nTake rest");
    timer_10();
     printf("Voila That's it for today");
    sleep(1);
    printf("Stay healthy Cheers");
}




