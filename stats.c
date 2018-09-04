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
 * @file stats.c
 * @brief Array Analysis
 *
 * This software analyzes an array of variables prits its' statistics
 *
 * @author Colin Willson
 * @date September 2, 2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics();

}

/* Add other Implementation File Code Here */
void print_statistics() {
  print_array();

  printf("The median is: %d", find_median(&test, SIZE));
  printf("The mean is: %d", find_mean(&test, SIZE));
  printf("The maximum is: %d", find_maximum(&test, SIZE));
  printf("The minimum is: %d", find_minimum(&test, SIZE));

}

void print_array(unsigned char *inputArray, unsigned int arraySize) {
  printf("The Array: {\n", );
  for(int i = 0; i < arraySize; i++) {
    if(i % 8 == 0){
      printf("\n");
    }
    printf(" %d,", *inputArray);
  }
  printf("}");
}

char find_median(unsigned char *inputArray, unsigned int arraySize) {
  // Make sure the array in in order
  sort_array(&inputArray);

  if(arraySize % 2 == 0) {
    // average the two middle numbers in the array
    int index = arraySize / 2;
    return (*inputArray[index] + *inputArray[index + 1])/2;
  }
  else {
    return *inputArray[(arraySize/2) + 1];
  }
}

char find_mean(unsigned char *inputArray, unsigned int arraySize){
  unsigned int total = 0;

  // Add all items up
  for(int i = 0; i < arraySize; i++) {
    total += *inputArray[i];
  }
  // Divide by total
  return total / arraySize;
}

char find_maximum(unsigned char *inputArray, unsigned int arraySize) {
  unsigned char max = *inputArray[0];

  //Loop through all items
  for(int i = 1; i < arraySize; i++) {
    // If this item is larger than max, update max to this value
    if(*inputArray[i] > max) {
      max = *inputArray[i];
    }
  }

  return max;
}

char find_minimum(unsigned char *inputArray, unsigned int arraySize) {
  unsigned char min = *inputArray[0];

  //Loop through all items
  for(int i = 1; i < arraySize; i++) {
    // If this item is larger than max, update max to this value
    if(*inputArray[i] < min) {
      max = *inputArray[i];
    }
  }

  return min;
}

void sort_array(unsigned char *inputArray, unsigned int arraySize) {
  unsigned char outputArray[SIZE] = {*inputArray[0]};

  //Loop for everything in the input array
  for(unsigned int i = 1; i < SIZE-1; i++) {
    //Compare it to everything in the output array

    // If the next item in the array is bigger
    unsigned int output_index = 0;
    while(*inputArray[output_index] < outputArray[i]) {
      output_index++;
    }

    //Move all the followinf items in the array down one
    for(unsigned int j = i; j > output_index; j--) {
      outputArray[j] = outputArray[j-1];
    }
    // Put the new item in the correct place in the array
    outputArray[outputIndex] = *inputArray[i];
  }

  // Transfer everything into the input array
  for(int i = 0; i < SIZE; i++) {
    *inputArray[i] = outputArray[i];
  }

}
