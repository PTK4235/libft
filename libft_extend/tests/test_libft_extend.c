/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft_extend.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:00:00 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:45:04 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_extend.h"
#include <stdio.h>
#include <string.h>

/* ========== Test Counters ========== */
static int	g_tests_passed = 0;
static int	g_tests_failed = 0;

/* ========== Test Utilities ========== */
void	test_assert(int condition, const char *test_name)
{
	if (condition)
	{
		printf("✓ %s\n", test_name);
		g_tests_passed++;
	}
	else
	{
		printf("✗ %s\n", test_name);
		g_tests_failed++;
	}
}

void	print_results(void)
{
	printf("\n======================================\n");
	printf("Tests Passed: %d\n", g_tests_passed);
	printf("Tests Failed: %d\n", g_tests_failed);
	printf("Total Tests: %d\n", g_tests_passed + g_tests_failed);
	printf("======================================\n");
}

/* ========== Conversion Function Tests ========== */
void	test_ft_atoi_base(void)
{
	printf("\n--- Testing ft_atoi_base ---\n");
	
	test_assert(ft_atoi_base("FF", "0123456789ABCDEF") == 255, 
		"ft_atoi_base: HEX FF = 255");
	test_assert(ft_atoi_base("10", "0123456789") == 10,
		"ft_atoi_base: DEC 10 = 10");
	test_assert(ft_atoi_base("0", "0123456789") == 0,
		"ft_atoi_base: zero");
	test_assert(ft_atoi_base("1111", "01") == 15,
		"ft_atoi_base: BIN 1111 = 15");
}

void	test_ft_atoi_piscine(void)
{
	printf("\n--- Testing ft_atoi_piscine ---\n");
	
	test_assert(ft_atoi_piscine("123") == 123,
		"ft_atoi_piscine: 123");
	test_assert(ft_atoi_piscine("-123") == -123,
		"ft_atoi_piscine: -123");
	test_assert(ft_atoi_piscine("0") == 0,
		"ft_atoi_piscine: zero");
	test_assert(ft_atoi_piscine("   +42") == 42,
		"ft_atoi_piscine: spaces and sign");
}

/* ========== Array Function Tests ========== */
void	test_ft_bubble_sort(void)
{
	int	tab1[] = {3, 1, 4, 1, 5};
	int	tab2[] = {1};
	int	tab_neg[] = {-5, -1, 0, 3, -10};
	
	printf("\n--- Testing ft_bubble_sort ---\n");
	
	ft_bubble_sort(tab1, 5);
	test_assert(tab1[0] == 1 && tab1[4] == 5,
		"ft_bubble_sort: basic sort");
	
	ft_bubble_sort(tab2, 1);
	test_assert(tab2[0] == 1,
		"ft_bubble_sort: single element");
	
	ft_bubble_sort(tab_neg, 5);
	test_assert(tab_neg[0] == -10 && tab_neg[4] == 3,
		"ft_bubble_sort: negative numbers");
}

void	test_ft_rev_int_tab(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {1};
	
	printf("\n--- Testing ft_rev_int_tab ---\n");
	
	ft_rev_int_tab(tab1, 5);
	test_assert(tab1[0] == 5 && tab1[4] == 1,
		"ft_rev_int_tab: reverse 5 elements");
	
	ft_rev_int_tab(tab2, 1);
	test_assert(tab2[0] == 1,
		"ft_rev_int_tab: single element");
}

/* ========== Math Function Tests ========== */
void	test_ft_facto(void)
{
	printf("\n--- Testing ft_facto ---\n");
	
	test_assert(ft_facto(0) == 1,
		"ft_facto: 0! = 1");
	test_assert(ft_facto(1) == 1,
		"ft_facto: 1! = 1");
	test_assert(ft_facto(5) == 120,
		"ft_facto: 5! = 120");
	test_assert(ft_facto(10) == 3628800,
		"ft_facto: 10! = 3628800");
}

void	test_ft_find_next_prime(void)
{
	printf("\n--- Testing ft_find_next_prime ---\n");
	
	test_assert(ft_find_next_prime(0) == 2,
		"ft_find_next_prime: 0 -> 2");
	test_assert(ft_find_next_prime(1) == 2,
		"ft_find_next_prime: 1 -> 2");
	test_assert(ft_find_next_prime(2) == 2,
		"ft_find_next_prime: 2 -> 2");
	test_assert(ft_find_next_prime(4) == 5,
		"ft_find_next_prime: 4 -> 5");
	test_assert(ft_find_next_prime(14) == 17,
		"ft_find_next_prime: 14 -> 17");
	test_assert(ft_find_next_prime(-5) == 2,
		"ft_find_next_prime: -5 -> 2");
}

void	test_ft_is_prime(void)
{
	printf("\n--- Testing ft_is_prime ---\n");
	
	test_assert(ft_is_prime(0) == 0,
		"ft_is_prime: 0 is not prime");
	test_assert(ft_is_prime(1) == 0,
		"ft_is_prime: 1 is not prime");
	test_assert(ft_is_prime(2) == 1,
		"ft_is_prime: 2 is prime");
	test_assert(ft_is_prime(17) == 1,
		"ft_is_prime: 17 is prime");
	test_assert(ft_is_prime(20) == 0,
		"ft_is_prime: 20 is not prime");
	test_assert(ft_is_prime(-5) == 0,
		"ft_is_prime: negative is not prime");
}

void	test_ft_power(void)
{
	printf("\n--- Testing ft_power ---\n");
	
	test_assert(ft_power(2, 0) == 1,
		"ft_power: 2^0 = 1");
	test_assert(ft_power(2, 5) == 32,
		"ft_power: 2^5 = 32");
	test_assert(ft_power(10, 3) == 1000,
		"ft_power: 10^3 = 1000");
	test_assert(ft_power(5, 2) == 25,
		"ft_power: 5^2 = 25");
}

void	test_ft_sqrt(void)
{
	printf("\n--- Testing ft_sqrt ---\n");
	
	test_assert(ft_sqrt(0) == 0,
		"ft_sqrt: sqrt(0) = 0");
	test_assert(ft_sqrt(1) == 1,
		"ft_sqrt: sqrt(1) = 1");
	test_assert(ft_sqrt(16) == 4,
		"ft_sqrt: sqrt(16) = 4");
	test_assert(ft_sqrt(25) == 5,
		"ft_sqrt: sqrt(25) = 5");
	test_assert(ft_sqrt(2) == 0,
		"ft_sqrt: sqrt(2) = 0 (not perfect)");
}

/* ========== String Function Tests ========== */
void	test_ft_strcat(void)
{
	char	dest1[50] = "Hello";
	char	dest2[50] = "";
	
	printf("\n--- Testing ft_strcat ---\n");
	
	ft_strcat(dest1, " World");
	test_assert(strcmp(dest1, "Hello World") == 0,
		"ft_strcat: concatenate strings");
	
	ft_strcat(dest2, "First");
	test_assert(strcmp(dest2, "First") == 0,
		"ft_strcat: concatenate to empty");
}

void	test_ft_strcapitalize(void)
{
	char	str1[] = "hello world";
	char	str2[] = "HELLO";
	char	str3[] = "123hello456world";
	
	printf("\n--- Testing ft_strcapitalize ---\n");
	
	ft_strcapitalize(str1);
	test_assert(strcmp(str1, "Hello World") == 0,
		"ft_strcapitalize: basic capitalize");
	
	ft_strcapitalize(str2);
	test_assert(strcmp(str2, "Hello") == 0,
		"ft_strcapitalize: uppercase to capitalize");
	
}

void	test_ft_strcmp(void)
{
	printf("\n--- Testing ft_strcmp ---\n");
	
	test_assert(ft_strcmp("abc", "abc") == 0,
		"ft_strcmp: equal strings");
	test_assert(ft_strcmp("abc", "abd") < 0,
		"ft_strcmp: abc < abd");
	test_assert(ft_strcmp("abd", "abc") > 0,
		"ft_strcmp: abd > abc");
	test_assert(ft_strcmp("", "") == 0,
		"ft_strcmp: empty strings");
}

void	test_ft_str_is_alpha(void)
{
	printf("\n--- Testing ft_str_is_alpha ---\n");
	
	test_assert(ft_str_is_alpha("abc") == 1,
		"ft_str_is_alpha: 'abc' is alpha");
	test_assert(ft_str_is_alpha("abc123") == 0,
		"ft_str_is_alpha: 'abc123' mixed");
	test_assert(ft_str_is_alpha("") == 1,
		"ft_str_is_alpha: empty string");
	test_assert(ft_str_is_alpha("ABC") == 1,
		"ft_str_is_alpha: uppercase");
}

void	test_ft_str_is_numeric(void)
{
	printf("\n--- Testing ft_str_is_numeric ---\n");
	
	test_assert(ft_str_is_numeric("12345") == 1,
		"ft_str_is_numeric: '12345' is numeric");
	test_assert(ft_str_is_numeric("123a45") == 0,
		"ft_str_is_numeric: '123a45' not numeric");
	test_assert(ft_str_is_numeric("") == 1,
		"ft_str_is_numeric: empty string");
	test_assert(ft_str_is_numeric("0") == 1,
		"ft_str_is_numeric: '0' is numeric");
}

void	test_ft_str_is_lowercase(void)
{
	printf("\n--- Testing ft_str_is_lowercase ---\n");
	
	test_assert(ft_str_is_lowercase("abc") == 1,
		"ft_str_is_lowercase: 'abc'");
	test_assert(ft_str_is_lowercase("Abc") == 0,
		"ft_str_is_lowercase: 'Abc' mixed");
	test_assert(ft_str_is_lowercase("") == 1,
		"ft_str_is_lowercase: empty");
}

void	test_ft_str_is_uppercase(void)
{
	printf("\n--- Testing ft_str_is_uppercase ---\n");
	
	test_assert(ft_str_is_uppercase("ABC") == 1,
		"ft_str_is_uppercase: 'ABC'");
	test_assert(ft_str_is_uppercase("Abc") == 0,
		"ft_str_is_uppercase: 'Abc' mixed");
	test_assert(ft_str_is_uppercase("") == 1,
		"ft_str_is_uppercase: empty");
}

void	test_ft_str_is_printable(void)
{
	printf("\n--- Testing ft_str_is_printable ---\n");
	
	test_assert(ft_str_is_printable("Hello") == 1,
		"ft_str_is_printable: 'Hello'");
	test_assert(ft_str_is_printable("") == 1,
		"ft_str_is_printable: empty");
}

void	test_ft_strlwr(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "HeLLo WoRLd";
	
	printf("\n--- Testing ft_strlwr ---\n");
	
	ft_strlwr(str1);
	test_assert(strcmp(str1, "hello") == 0,
		"ft_strlwr: uppercase to lowercase");
	
	ft_strlwr(str2);
	test_assert(strcmp(str2, "hello world") == 0,
		"ft_strlwr: mixed case to lowercase");
}

void	test_ft_strupcase(void)
{
	char	str1[] = "hello";
	char	str2[] = "HeLLo WoRLd";
	
	printf("\n--- Testing ft_strupcase ---\n");
	
	ft_strupcase(str1);
	test_assert(strcmp(str1, "HELLO") == 0,
		"ft_strupcase: lowercase to uppercase");
	
	ft_strupcase(str2);
	test_assert(strcmp(str2, "HELLO WORLD") == 0,
		"ft_strupcase: mixed to uppercase");
}

void	test_ft_strncpy(void)
{
	char	dest1[20] = "";
	char	dest2[5] = "hello";
	
	printf("\n--- Testing ft_strncpy ---\n");
	
	ft_strncpy(dest1, "hello", 5);
	test_assert(strcmp(dest1, "hello") == 0,
		"ft_strncpy: basic copy");
	
	ft_strncpy(dest2, "hi", 2);
	test_assert(dest2[0] == 'h' && dest2[1] == 'i',
		"ft_strncpy: overwrite");
}

void	test_ft_strncat(void)
{
	char	dest1[50] = "Hello";
	char	dest2[50] = "";
	
	printf("\n--- Testing ft_strncat ---\n");
	
	ft_strncat(dest1, " World", 6);
	test_assert(strcmp(dest1, "Hello World") == 0,
		"ft_strncat: concatenate");
	
	ft_strncat(dest2, "Test", 2);
	test_assert(strcmp(dest2, "Te") == 0,
		"ft_strncat: limited concatenate");
}

void	test_ft_strstr(void)
{
	printf("\n--- Testing ft_strstr ---\n");
	
	test_assert(ft_strstr("hello world", "world") != NULL,
		"ft_strstr: find 'world'");
	test_assert(ft_strstr("hello world", "xyz") == NULL,
		"ft_strstr: not found");
	test_assert(ft_strstr("hello", "hello") != NULL,
		"ft_strstr: full match");
}

/* ========== Utility Function Tests ========== */
void	test_ft_swap(void)
{
	int	a;
	int	b;
	
	printf("\n--- Testing ft_swap ---\n");
	
	a = 5;
	b = 10;
	ft_swap(&a, &b);
	test_assert(a == 10 && b == 5,
		"ft_swap: swap 5 and 10");
	
	a = -3;
	b = 7;
	ft_swap(&a, &b);
	test_assert(a == 7 && b == -3,
		"ft_swap: swap negative");
}

/* ========== Main Test Runner ========== */
int	main(void)
{
	printf("=====================================\n");
	printf("  LIBFT_EXTEND UNIT TEST SUITE\n");
	printf("=====================================\n");
	
	/* Conversion Functions */
	test_ft_atoi_base();
	test_ft_atoi_piscine();
	
	/* Array Functions */
	test_ft_bubble_sort();
	test_ft_rev_int_tab();
	
	/* Math Functions */
	test_ft_facto();
	test_ft_find_next_prime();
	test_ft_is_prime();
	test_ft_power();
	test_ft_sqrt();
	
	/* String Functions */
	test_ft_strcat();
	test_ft_strcapitalize();
	test_ft_strcmp();
	test_ft_str_is_alpha();
	test_ft_str_is_numeric();
	test_ft_str_is_lowercase();
	test_ft_str_is_uppercase();
	test_ft_str_is_printable();
	test_ft_strlwr();
	test_ft_strupcase();
	test_ft_strncpy();
	test_ft_strncat();
	test_ft_strstr();
	
	/* Utility Functions */
	test_ft_swap();
	
	print_results();
	return (0);
}
