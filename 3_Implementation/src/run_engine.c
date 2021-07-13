/**[]
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
#include "unistd.h"
/**
 * @brief main function to run whole program
 * 
 * @return int 
 */
int run_engine(){
    User_info User_1;
	User_info * User;
	User = &User_1;
	int what_c=0;
	float bmi_value=0.0;
	char weight_status_value;

	printf("Hello, I am Baymax. Your Personal Health Coach.\n");
	sleep(2);
	printf("\nBefore we start,");
	sleep(2);
	printf("please note down the following instructions.\n INSTRUCTIONS \n ");
	sleep(2);
	printf("1. Be Gentle with the program. Provide valid input \n ");
	sleep(1);
	printf("2. Follow the Instructions as provided");
	sleep(1);
	printf(" Let's begin");
	sleep(2);


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
			printf("\nOkay taking values in US Units");
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
	sleep(1);
    bmi_value=bmi_calculator_Us(User->user_height,User->user_weight);
	printf("\nYour BMI Value is %0.3f . ", bmi_value);
	sleep(2);
	break;
	}
	/**
	 * @brief if its 2 i.e metric
	 * 
	 * @return else 
	 */
	else if(what_c==2){

	printf("\nOkay taking values in Metric Units");
	int height_check=0;
	while(height_check !=1){
	height_check=get_user_height_Metric(User);
	if(height_check == 1){
		printf("\nOkay, Height noted as %d", User->user_height);
	}
	else{
	printf("\nThat's a wrong height you entered %s", User->name );}
        
	}
	/**
	 * @brief Getting User Weight. Using while loop to run
	 * this forever until the user enters a valid input.
	 * 
	 */
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
	sleep(1);
    bmi_value=bmi_calculator_Metric(User->user_height,User->user_weight);
	printf("\n Your BMI Value is %0.3f . ", bmi_value);
	sleep(2);
	break;
	
	}
	
	}
	
	/**
	 * @brief Getting user weight status
	 * 
	 * 
	 */
	printf("\n\n BMI status is");
	weight_status_value = get_weight_status(bmi_value);
	sleep(1);
    /**
     * @brief Selecting weight plan according to the weight status
     * 
     */
	printf("\n\nStarting a workout plan.\n\n Get Ready ");
	sleep(2);
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
