/**
 * @file user.c
 * @author Ajith V
 * @brief this source file is to get user input
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
//#include <conio.h>
#include <stdlib.h>

#define MAXINPUT 100

/**
 * @brief Getting a valid user name
 * 
 * @param User 
 * @return int 
 */

int find_length(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		if (NULL == User->name){
			return 0;
		}
		User->name_length = strlen(User->name);
		return 1;
	} 
}


int allocate_name(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		User->name = (char*)malloc(name_len_limit*sizeof(char));
		if (NULL == User->name){
			return 0;
		}
		return 1;
	}
}


int initialise_name(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		User->name = NULL;
		return 1;
	}
}


User_info_status get_user_name(User_info * User){
	int ret = 0;
	ret = initialise_name(User); 
	// name is intialised
	ret = allocate_name(User);
	if (0 == ret){
		return no_mem;
	}
	printf("\nWhat shall i call you? : ");
	scanf("%19s", User->name);
	for(int i = 0; *(User->name + i) != '\0';i++){
		if (isalpha(*(User->name + i))){
			if (isupper(*(User->name + i))){
				*(User->name + i) = tolower(*(User->name + i));
			}
		}
		else{
			return not_valid_name;
		}
	}
	find_length(User);
	return valid_name;
}

void deallocate_name(User_info * User){
	free(User->name);
	User->name = NULL;
}


/**
 * @brief this is for error handling of inputs user_height and user_weight if entered is not a number
 * while loop is used to run until one valid input is provided.
 * 
 */
char input[MAXINPUT] = "";
char flag[4]="wrg";
const char* check_input(){
//char input[MAXINPUT] = "";
  int length, i, ok;
  
 do {
    ok = 1;
    scanf("%s", input);
    length = strlen(input);
    if (input <= 0) {
      ok = 0;
      printf("Entered input is not a positive number\n");
	  return flag;

    } else {
      for (i = 0; i < length; i++) {
        if (!isdigit(input[i])) {
          printf("Entered input is not a number\n");
          ok = 0;
		  return flag;
        }
      }
    }
  } while (!ok);
  return input;
}

/**
 * @brief Get the user height object
 * 
 * @param User 
 * @return User_info_status 
 */

User_info_status get_user_height_US(User_info * User){
  float height;
    printf("\nEnter height in inches(in) : ");
	const char* check_b;
	check_b=check_input();
	if(check_b=="wrg"){
		return not_valid_digit;
	}	
	height = atoi(check_b);
	//printf("height : %d",height);
	if (height>1 && height<1000){
		User->user_height = height;
		return valid_digit;
	}
	else{
		return not_valid_digit;
	}
	return valid_digit;
	
	
  
}
/**
 * @brief Get the user weight object
 * 
 * @param User 
 * @return User_info_status 
 */
User_info_status get_user_weight_US(User_info * User){
	int weight;
	printf("\n Enter Weight in pounds(lb) : ");
	const char* check_b;
	check_b=check_input();
	if(check_b=="wrg"){
		return not_valid_digit;
	}
	weight=atoi(check_b);
	if (weight>10 && weight<1000){
		User->user_weight = weight;
		return valid_digit;
	}
	else{
		return not_valid_digit;
	}
	return valid_digit;
}
/**
 * @brief Get the user height Metric object
 * 
 * @param User 
 * @return User_info_status 
 */
User_info_status get_user_height_Metric(User_info * User){
  float height;
    printf("\nEnter height in centimetres(cm) : ");
	const char* check_b;
	check_b=check_input();
	if(check_b=="wrg"){
		return not_valid_digit;
	}	
	height = atoi(check_b);
	//printf("height : %d",height);
	if (height>1 && height<1000){
		User->user_height = height;
		return valid_digit;
	}
	else{
		return not_valid_digit;
	}
	return valid_digit;
	
	
  
}
/**
 * @brief Get the user weight object
 * 
 * @param User 
 * @return User_info_status 
 */
User_info_status get_user_weight_Metric(User_info * User){
	int weight;
	printf("\n Enter Weight in grams(gms) : ");
	const char* check_b;
	check_b=check_input();
	if(check_b=="wrg"){
		return not_valid_digit;
	}
	weight=atoi(check_b);
	if (weight>10 && weight<900000){
		User->user_weight = weight;
		return valid_digit;
	}
	else{
		return not_valid_digit;
	}
	return valid_digit;
}

int in_what(){
	int what=0;
  printf("\n Choose one of the below units to input height and weight  ");
  printf("\n1). US units (i.e ., 'Height in inches(in)' & 'Weight in pounds(lb)')");
  printf("\n2). Metric Units (i.e ., 'Height in cnetimetre (cm)' & 'Weight in grams(gms)') ");
  const char* check_b;
  check_b=check_input();
  if(check_b=="wrg"){
		return not_valid_digit;
	}
	what=atoi(check_b);
	if (what==1){
		return valid_digit;
	}
	else if (what==2){
		return 2;
	}
	else{
		return not_valid_digit;
	}


}