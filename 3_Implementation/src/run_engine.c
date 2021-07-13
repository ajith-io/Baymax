/**
 * @file main.c
 * @author Ajith
 * @brief To start here
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user.h"
#include <stdio.h>
#include "bmi_calculator.h"
#include "weight_status.h"

#include "workout_plan.h"
#include "run_engine.h"

int run_engine(){
    User_info User_1;
	User_info * User;
	User = &User_1;
	int what_c=0;
	float bmi_value=0.0;
	char weight_status_value;

	printf("Hello, I am Baymax. Your Personal Health Coach.\n Before we start, please note down the following instructions.\n INSTRUCTIONS \n 1. Be Gentle with the program. Provide valid input \n ");
	/**
	 * @brief Getting User Name. Using while loop to run
	 * this forever until the user enters a valid input.
	 * 
	 */
    int name_check = 0;
    //name_check = get_user_name(User);
	while(name_check !=1){
		name_check=get_user_name(User);
		if(name_check == 1){
			printf("Hello %s", User->name);
		}
		else{
		printf("Well that's an invalid name.");}

	}
	/**
	 * @brief Getting User Height. Using while loop to run
	 * this forever until the user enters a valid input.
	 * 
	 */

	
	while(what_c!=1 || what_c!=2){
		what_c=in_what();

		/**
		 * @brief Construct a new if object is 1
		 * 
		 */
		if(what_c ==1){
			printf("\n Okay taking values in US Units");
			int height_check=0;
		while(height_check !=1){
		height_check=get_user_height_US(User);
		if(height_check == 1){
			printf("\nOkay, Height noted as %d", User->user_height);
		}
		else{
		printf("\nThat's a wrong height you entered %s", User->name );}
        
	}
	int weight_check=0;
	while(weight_check !=1){
		weight_check=get_user_weight_US(User);
		if(weight_check == 1){
			printf("\nOkay, weight noted as %d", User->user_weight);
		}
		else{
		printf("\nThat's a wrong weight you entered %s", User->name );}

	}
	printf("\nCalculating BMI...");
    bmi_value=bmi_calculator_Us(User->user_height,User->user_weight);
	printf("\n Your BMI Value is %0.3f . ", bmi_value);
	break;
	}
	/**
	 * @brief if its 2
	 * 
	 * @return else 
	 */
	else if(what_c==2){

	printf("\n Okay taking values in Metric Units");
	int height_check=0;
	while(height_check !=1){
	height_check=get_user_height_Metric(User);
	if(height_check == 1){
		printf("\nOkay, Height noted as %d", User->user_height);
	}
	else{
	printf("\nThat's a wrong height you entered %s", User->name );}
        
	}
	int weight_check=0;
	while(weight_check !=1){
		weight_check=get_user_weight_Metric(User);
		if(weight_check == 1){
			printf("\nOkay, weight noted as %d", User->user_weight);
		}
		else{
		printf("\nThat's a wrong weight you entered %s", User->name );}

	}
	printf("\nCalculating BMI...");
    bmi_value=bmi_calculator_Metric(User->user_height,User->user_weight);
	printf("\n Your BMI Value is %0.3f . ", bmi_value);
	break;
	
	}
	
	}
	
	/**
	 * @brief Getting User Weight. Using while loop to run
	 * this forever until the user enters a valid input.
	 * 
	 */
	printf("\n\n Weight status is");
	weight_status_value = get_weight_status(bmi_value);
    
	printf("\n\nStarting a workout plan.\n\n Get Ready ");
	
	switch(weight_status_value)
	{
		case 1:
			workout_1();
			break;
		case 2:
			workout_2();
			break;
		case 3:
			workout_3();
			break;
		case 4:
			workout_4();
			break;
		case 5:
			workout_5();
			break;
		default:
			printf("Some error occured");
		

	}
	
return 0;


		
}
