/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <c code for stats >
 *
 * <The code implement some basic statistic functions given a data set>
 *
 * @author <Roberto Duarte>
 * @date <15/06/2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  return(0);

}


void print_array(unsigned char array[],unsigned int length){

}

unsigned char * sort_array(unsigned char array[],unsigned int length){

  return array;
}

void print_statistics(int min,int max,float mean,float median){

}

float find_median(unsigned char array[],unsigned int length){

  return median;
}

float find_mean(unsigned char array[],unsigned int length){

  return sum;
}

int find_minimum(unsigned char array[],unsigned int length){

  return min;
}

int find_maximum(unsigned char array[],unsigned int length){

  return max;
}

/* Add other Implementation File Code Here */
