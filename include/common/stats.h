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
 * @brief Header file for stats.c (Updated for Final week assessment)
 *
 *
 * @author Mrinal Narayan Kumara Krishnan
 * @date January 3, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Function to find the Maximum of the Array Set
 *
 * Computes the Maximum of the elements in the given Array Set
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return The Maximum Value of the Array Set
 */

unsigned char find_maximum(unsigned char *arrayset, unsigned int length);


/**
 * @brief Function to find the Minimum of the Array Set
 *
 * Computes the Minimum of the elements in the given Array Set
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return The Minimum Value of the Array Set
 */

unsigned char find_minimum(unsigned char *arrayset, unsigned int length);

/**
 * @brief Function to find the Mean of the Array Set
 *
 * Computes the Mean of the elements in the given Array Set
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return The Mean Value of the Array Set
 */

unsigned char find_mean(unsigned char *arrayset, unsigned int length);


/**
 * @brief Function to find the Median of the Array Set
 *
 * Computes the Median of the elements in the given Array Set
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return The Median Value of the Array Set
 */

unsigned char find_median(unsigned char *arrayset, unsigned int length);

/**
 * @brief Displays the statistics of the array set
 *
 * Prints the computed statistics
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return None
 */

void print_statistics(unsigned char *arrayset, unsigned int length);

/**
 * @brief Displays the the array set
 *
 * Prints the array set
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return None
 */

#ifdef VERBOSE
void print_array(unsigned char *arrayset, unsigned int length);
#endif


/**
 * @brief Sorts the Array set
 *
 * Sorts the array set in descending order
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return None
 */

void sort_array(unsigned char *arrayset, unsigned int length);


/**
 * @brief Computes the sum of the array
 *
 *
 *
 * @param <arrayset> The Array Set
 * @param <length>   The Length of the Array
 * 
 *
 * @return Sum of the Array Set
 */

long find_sum(unsigned char *arrayset, unsigned int length);



#endif /* __STATS_H__ */
