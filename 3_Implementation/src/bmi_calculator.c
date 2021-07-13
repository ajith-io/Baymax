/**
 * @file bmi_calculator.c
 * @author Ajith V
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "bmi_calculator.h"
/**
 * @brief Calculates Bmi in US Units
 * 
 * @param x = Height
 * @param y = Weight
 * @return float 
 */
float bmi_calculator_Us(int x, int y){
    float bmi_value=0;
    
    bmi_value =((float) y*703)/(float)(x*x);
    return bmi_value;
}
/**
 * @brief Calculates Bmi in Metric Units
 * 
 * @param x = Height
 * @param y = Weight
 * @return float 
 */
float bmi_calculator_Metric(int x, int y){
    float bmi_value=0;
    float x_m=(float)x/100;
    float y_kg=(float)y/1000;
    bmi_value =((float) y_kg)/(float)(x_m*x_m);
    return bmi_value;
}
