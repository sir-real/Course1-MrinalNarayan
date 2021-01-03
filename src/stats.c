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
 * @file Intro to Embedded Systems - Assignment 1 
 * @brief Calculate and Print Statistics of Array Set
 *
 * <Week 1 Assignment of Introduction of Embedded Systems course>
 *
 * @author <Mrinal Narayan Kumara Krishnan>
 * @date <Feb 9, 2020>
 *
 */



#include <stdio.h>
#include "stats.h"
#include "platform.h"

/* Size of the Data Set */
#define SIZE (40)

int states() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  #ifdef VERBOSE
    print_array(test, SIZE);    
  #endif

  print_statistics(test, SIZE);
  
  return 0;

}

/* Add other Implementation File Code Here */

/**
 * @brief Function that prints the Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/

#ifdef VERBOSE
void print_array(unsigned char *arrayset, unsigned int length)
{

  for(int i = 0; i < length; i++)
  {
    printf("%d, ",arrayset[i]);    
  }
  printf("\n");
}
#endif


/**
 * @brief Function that prints the Statistics information of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/

void print_statistics(unsigned char *arrayset, unsigned int length)
{
   sort_array(arrayset, length);

   unsigned char minimum = find_minimum(arrayset, length);
   unsigned char maximum = find_maximum(arrayset, length);
   unsigned char mean = find_mean(arrayset, length);
   unsigned char median = find_median(arrayset, length);

   printf("Min = %d \n", minimum);
   printf("Max = %d \n", maximum);
   printf("Mean = %d \n", mean);
   printf("Median = %d \n", median);
}

/**
 * @brief Sorts the Array Set in Descending Order
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
void sort_array(unsigned char *arrayset, unsigned int length)
{
   int temp;

   for(int i = 0; i < length; i++)
   {
      for(int j = i+1; j < length; ++j)
      {
         if(arrayset[i] < arrayset[j])
         {
            temp = arrayset[i];
            arrayset[i] = arrayset[j];
            arrayset[j] = temp;
         }
      }
   }
}

/**
 * @brief Function that gets the maximum of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
unsigned char find_maximum(unsigned char *arrayset, unsigned int length)
{
   sort_array(arrayset, length);
   return arrayset[0];
}

/**
 * @brief Function that gets the minimum of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
unsigned char find_minimum(unsigned char *arrayset, unsigned int length)
{
   sort_array(arrayset, length);
   return arrayset[length - 1];
}

/**
 * @brief Function that gets the sum of the elements of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
long find_sum(unsigned char *arrayset, unsigned int length)
{
   long sumval = 0;
   for(int i = 0; i < length; i++)
   {
      sumval = sumval + arrayset[i];
   }

   return sumval;
}

/**
 * @brief Function that gets the mean of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
unsigned char find_mean(unsigned char *arrayset, unsigned int length)
{
   long sumval = find_sum(arrayset, length);
   int meanval = sumval / length;

   return (unsigned char)meanval;
    
}

/**
 * @brief Function that gets the median of the given Array Set
 *
 * @param <arrayset> Array Set 
 * @param <length>   Array length
 * 
 * @return N/A
*/
unsigned char find_median(unsigned char *arrayset, unsigned int length)
{   
   int temp;
   int medianval;

   // sort the array in ascending order
   for(int i = 0; i < length; i++)
   {
      for(int j = i+1; j < length; ++j)
      {
         if(arrayset[i] > arrayset[j])
         {
            temp = arrayset[i];
            arrayset[i] = arrayset[j];
            arrayset[j] = temp;
         }
      }
   }

   if(length % 2 == 0)
   {
      medianval = (arrayset[(length-1)] + arrayset[length/2]);
   }
   else
   {
      medianval = arrayset[length/2];
   }

   return (unsigned char)medianval;
   
}


