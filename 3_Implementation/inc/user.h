#ifndef __USER_C
#define __USER_C

#define name_len_limit 20
typedef struct User_info {
	char * name;
    int name_length;
	int user_weight;
	int user_height;
	
} User_info;

typedef enum User_info_status{
	not_valid_name = -1, 
	not_valid_digit = -1,
	valid_name = 1, 
	valid_digit = 1,
	no_mem = 0

} User_info_status;
int in_what();
int intialise_name(User_info *);
//int intialise_which_lvl(User_info *);
int find_length(User_info *);
int allocate_name(User_info *);
//int change_lvl(User_info *, int );
User_info_status get_user_name(User_info *);
User_info_status get_user_height_US(User_info *);
User_info_status get_user_weight_US(User_info *);
User_info_status get_user_height_Metric(User_info *);
User_info_status get_user_weight_Metric(User_info *);
void deallocate_name(User_info *);
#endif