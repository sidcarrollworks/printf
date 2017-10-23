#include "holberton.h"
#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0
      */

int main(void)
{
		char c;
			char *str;
				int number;

					/*---- Test cases for characters ----*/
					c = 'h';
						_printf("First letter in Holberton is %c\n", c); /* output: First letter in Holberton is h*/
							printf("First letter in Holberton is %c\n", c);

								/*---- Test cases for Numbers ----*/
								number = 19912507;
									_printf("%i, %d\n", number, number); /* output: 19912507 19912507*/
										printf("%i, %d\n", number, number);

											/*---- Test cases for strings ----*/
											str = "Holberton";
												_printf("%s school\n", str); /* output: Holberton school*/
													printf("%s school\n", str);
														/*---- Test cases for NULL -----*/
														str = NULL;
															_printf("%s school\n", str); /*output: (null) school*/
																printf("%s school\n", str);
																	return (0);
}
