#include "workout_plan.h"
#include <stdio.h>
#include <unistd.h>

void workout_1(void)
{
    printf("\nIts a special workout plan for under weight. \n lets begin");
    sleep(1);
    printf("\nJUMPING JACKS");
    

    printf("\nDo for 30 sec");
   // timer_1();
    printf("\n\nSTART");
    timer_30();
    printf("\n\nTake rest");
  timer_10();


}
void timer_10(){
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",i);
        sleep(1);
    }}
void timer_30(){
    for(int i=1; i<=30; i++)
    {
        printf("%d\n",i);
        sleep(1);
    }}
void workout_2()
{
    printf("\nIts a special workout plan for Normal. \n lets begin");
}

void workout_3()
{
    printf("\nIts a special workout plan for Overweight. \n lets begin");
}

void workout_4()
{
    printf("\nIts a special workout plan for Obese . \n lets begin");
}

void workout_5()
{
    printf("\nIts a special workout plan for Extremely Obese. \n lets begin");
}




