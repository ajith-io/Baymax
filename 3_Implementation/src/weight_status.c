/**
 * @file weight_status.c
 * @author Ajith
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "weight_status.h"
#include <stdio.h>

char get_weight_status(float x){
    char value;
    if(x<18.5){
        printf("Underweight");
        value=1;
        return value;
    }
    else if (x>=18.5 &&x<=24.9){
        printf(" Normal");
        value=2;
        return value;
    }
    else if (x>=25.0 && x<=29.9){
        printf(" Overweight");
        value=3;
        return value;
    }
    else if (x>=30.0 && x<=34.9){
        printf("Obese");
        value=4;
        return value;
    }
    else {
        printf("Extremely obese");
        value=5;
        return value;
    }
   // return 0;




}