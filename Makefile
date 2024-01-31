GCC=gcc
FLAGS=-Wall -Wextra -Werror -pedantic -std=c99
DEBUG=-g
BUILD_DIR=bins

bubble-sort-debug: bubble-sort.c
	$(GCC) $(FLAGS) $(DEBUG) -o $(BUILD_DIR)/bubble-sort bubble-sort.c

bubble-sort: bubble-sort.c
	$(GCC) $(FLAGS) -o $(BUILD_DIR)/bubble-sort bubble-sort.c

insertion-sort-debug: insertion-sort.c
	$(GCC) $(FLAGS) $(DEBUG) -o $(BUILD_DIR)/insertion-sort insertion-sort.c

insertion-sort: insertion-sort.c
	$(GCC) $(FLAGS) -o $(BUILD_DIR)/insertion-sort insertion-sort.c

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/*
