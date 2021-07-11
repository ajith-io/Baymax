# Name of the project
PROJECT_NAME = Baymax

# Output directory
BUILD = build

# All source code files
SRC = main.c \
src/user.c \
src/bmi_calculator.c \
src/weight_status.c \
src/workout_plan.c 


# All test source files
TEST_SRC = src/user.c \
src/bmi_calculator.c \
src/weight_status.c \
src/workout_plan.c \
test/test.c\
unity/unity.c

TEST_OUTPUT =  Test_$(PROJECT_NAME)
# All test source files


TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
#INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
COV_SRC = test.c
# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .
valgrind: 
	valgrind ./$(TEST_OUTPUT).$(EXEC)
memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXEC)
	gdb $(PROJECT_NAME).$(EXEC)

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage $(INC) $(TEST_SRC) -o $(TEST_OUTPUT).$(EXEC)
	./$(TEST_OUTPUT).$(EXEC)
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build
