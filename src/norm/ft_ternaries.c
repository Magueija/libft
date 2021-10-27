/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternaries.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:18:35 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:37:04 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks the given condition and returns the char 'val1' if true 
 *	else returns the char 'val2', similar to ternaries ( ? : ).
 * @param	condition [int] the condition
 * @param	val1 [char] value to be returned if true
 * @param	val2 [char] value to be returned if false
 * @returns	[char] 'val1' if (condition == true), if not 'val2'
**/
char	ft_ternchar(int condition, char val1, char val2)
{
	if (condition)
		return (val1);
	else
		return (val2);
}

/**
 * Checks the given condition and returns the long 'val1' if true 
 *	else returns the long 'val2', similar to ternaries ( ? : ).
 * @param	condition [int] the condition
 * @param	val1 [long] value to be returned if true
 * @param	val2 [long] value to be returned if false
 * @returns	[long] 'val1' if condition == true, if not 'val2'
**/
long	ft_ternint(int condition, long val1, long val2)
{
	if (condition)
		return (val1);
	else
		return (val2);
}

/**
 * Checks the given condition and returns the long long 'val1' if true 
 *	else returns the long long 'val2', similar to ternaries ( ? : ).
 * @param	condition [int] the condition
 * @param	val1 [long long] value to be returned if true
 * @param	val2 [long long] value to be returned if false
 * @returns	[long long] 'val1' if (condition == true), if not 'val2'
**/
long long	ft_ternllint(int condition, long long val1, long long val2)
{
	if (condition)
		return (val1);
	else
		return (val2);
}

/**
 * Checks the given condition and returns the long double 'val1' if true 
 *	else returns the long double 'val2', similar to ternaries ( ? : ).
 * @param	condition [int] the condition
 * @param	val1 [long double] value to be returned if true
 * @param	val2 [long double] value to be returned if false
 * @returns	[long] 'val1' if (condition == true), if not 'val2'
**/
long double	ft_ternfloat(int condition, long double val1, long double val2)
{
	if (condition)
		return (val1);
	else
		return (val2);
}

/**
 * Checks the given condition and returns the value pointed by 'val1' 
 *	if true else returns pointed by 'val2', similar to ternaries ( ? : ). 
 *	If needed to free the non-returned value, 'tofree' must be non 0.
 * @param	condition [int] the condition
 * @param	val1 [long] value to be returned if true
 * @param	val2 [long] value to be returned if false
 * @param	tofree [short] condition: non 0 to free '*val2', 0 to free
 * @returns	[long] 'val1' if (condition == true), if not 'val2'
**/
void	*ft_ternpt(int condition, void *val1, void *val2, short tofree)
{
	if (condition)
	{
		if (tofree)
			free(val2);
		return (val1);
	}
	else
	{
		if (tofree)
			free(val1);
		return (val2);
	}
}
