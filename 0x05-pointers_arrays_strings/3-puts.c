#include "main.h"
#include<stdio.h>

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf(*str);
		str++;
	}
	printf('\n');
}
