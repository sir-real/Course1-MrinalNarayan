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
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__
#include <stdint.h>

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);

/**
 * @brief Copies Source to Destination
 *
 * Given a pointer to src and dst, src is copied into dst
 * and a pointer to dst is returned.
 *
 * @param src Pointer to source 
 * @param dst Pointer to destination
 * @param length of memory to be copied
 *
 * @return Pointer to desitination
 */
unsigned char* my_memmove(unsigned char* src, unsigned char* dst, unsigned long length);

/**
 * @brief Copies Source to Destination
 *
 * Given a pointer to src and dst, src is copied into dst
 * and a pointer to dst is returned.
 *
 * @param src Pointer to source 
 * @param dst Pointer to destination
 * @param length of source file
 *
 * @return Pointer to desitination
 */
unsigned char* my_memcopy(unsigned char* src, unsigned char* dst, unsigned long length);

/**
 * @brief Sets the given value
 *
 * Given a pointer to src, the given value is set
 * and a pointer to src is returned.
 *
 * @param src Pointer to source 
 * @param length To how much in memory the values need to be set
 * @param value Value that needs to be set
 *
 * @return Pointer to source
 */
unsigned char* my_memset(unsigned char* src, unsigned long length, unsigned char value);

/**
 * @brief Sets the given value
 *
 * Given a pointer to src, all the specified number of memory bytes need to be zeroed
 * and a pointer to src is returned.
 *
 * @param src Pointer to source 
 * @param length To how much in memory the values need to be zeroed
 *
 * @return Pointer to source
 */
unsigned char* my_memzero(unsigned char* src, unsigned long length);

/**
 * @brief Sets the given value
 *
 * Given a pointer to src, all the bytes shall be reversed
 * and a pointer to src is returned.
 *
 * @param src Pointer to source 
 * @param length To how much in memory the values need to be reversed
 *
 * @return Pointer to source
 */
unsigned char* my_reverse(unsigned char* src, unsigned long length);

/**
 * @brief Sets the number of words that shall be dynamically allocated
 *
 * @param length No. of words
 *
 * @return Pointer to memory
 */
uint32_t* reserve_words(unsigned long length);

/**
 * @brief Frees the dynamically allocated memory
 *
 * @param src Pointer to the source
 *
 * @return None
 */
void free_words(uint32_t * src);


 

#endif /* __MEMORY_H__ */
