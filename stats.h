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
 * @file stats.h
 * @brief Header file for Array Analysis
 *
 * This is the header file for this software which analyzes an array
 * of variables prits its' statistics
 *
 * @author Colin Willson
 * @date September 2, 2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Print Statistics
 *
 * This function will print the statistics of the provided
 * array of data
 */
void print_statistics()

/**
 * @brief Print Array
 *
 * Neatly prints a readable representation of an array
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 */
void print_array(unsigned char *inputArray, unsigned int arraySize)

/**
 * @brief Find the median
 *
 * Finds the median value of all the items in the array
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 *
 * @return The calculated median value
 */
void find_median(unsigned char *inputArray, unsigned int arraySize)

/**
 * @brief Find the mean
 *
 * Finds the mean value of all the values in the array
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 *
 * @return The calculated mean value
 */
void find_mean(unsigned char *inputArray, unsigned int arraySize)

/**
 * @brief Find the maximum value
 *
 * Finds the maximum value in the array
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 *
 * @return The calculated maximum value
 */
void find_maximum(unsigned char *inputArray, unsigned int arraySize)

/**
 * @brief Find the minimum value
 *
 * Finds the minimum value in the array
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 *
 * @return The calculated minimum value
 */
void find_minimum(unsigned char *inputArray, unsigned int arraySize)

/**
 * @brief Sort Array
 *
 * Sorts the array from highest to lowest. This does not return
 * a value because it manipulates the array directly
 *
 * @param *inputArray A pointer to an array of values
 * @param arraySize The size of the array
 */
void sort_array(unsigned char *inputArray, unsigned int arraySize)

#endif /* __STATS_H__ */
