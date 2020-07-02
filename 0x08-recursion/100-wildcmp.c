#include "holberton.h"
int str_len_recursion(char *s);
int str_compare_rev_recur(char *s, int len, int len_org);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer of the string to compute
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = str_len_recursion(s);
	return (str_compare_rev_recur(s, len, len));
}
/**
 * str_len_recursion - calculates de length of @s
 * @s: pointer of the string to compute
 * Return: length of @s
 */
int str_len_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len_recursion(s + 1));
}
/**
 * str_compare_rev_recur - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer of the string to compute
 * @len: the remaining length of the recursion
 * @len_org: the original lenght of @s
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int str_compare_rev_recur(char *s, int len, int len_org)
{
	if (s[0] != s[len - 1])
		return (0);
	else if (len > 1)
		return (1 * str_compare_rev_recur(s + 1, (len - 2), len_org));
	else
		return (1);
}
