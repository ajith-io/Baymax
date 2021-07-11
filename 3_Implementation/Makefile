SRC = src/user.c \
src/bmi_calculator.c \
src/weight_status.c \
src/workout_plan.c 

all: 
	gcc main.c ${SRC} -Iinc -o all.out
run : all
	./all.out
	
clean:
	rm all.out