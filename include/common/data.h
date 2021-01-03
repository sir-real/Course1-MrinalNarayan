/**
 * @file data.h 
 * @brief This file is to be used to course 1 final assessment and is the header file for data.c.
 *
 * @author Mrinal Narayan Kumara Krishnan
 * @date January 3, 2021
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Convert std int into ASCII string
 *
 * @param data Data that needs to be modified
 * @param ptr Pointer to modified string
 * @param base Base values used
 *
 * @return Converted data length
 */
unsigned char my_itoa(int data, unsigned char* ptr, unsigned int base);

/**
 * @brief Convert std ASCII into int string*
 *
 * @param data Data that needs to be modified
 * @param ptr Pointer to modified string
 * @param base Base values used
 *
 * @return Length of converted data including NULL terminator
 */
int my_atoi(unsigned char* ptr, unsigned char digits, unsigned int base);

#endif /* __DATA_H__ */

