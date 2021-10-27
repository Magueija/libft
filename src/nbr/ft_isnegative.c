/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:24:36 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:09:48 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a number is negative and the changes the 
 *	number pointer by 'n' to its absolute. If the number 
 *	value is LONG_LONG_MIN then 1 is subtracted and 2 
 *	is returned.
 * @param	n [void *] pointer to the number to be checked 
 * @returns	[short] 2 if LONG_LONG_MIN, 1 if negative, 0 if not
**/
short	ft_isnegative(void *n)
{
	long long	*num;

	num = (long long *)n;
	if (*num < 0LL)
	{
		if (*num == (-__LONG_LONG_MAX__ - 1LL))
		{
			*num = __LONG_LONG_MAX__;
			return (2);
		}
		*num = *num * -1LL;
		return (1);
	}
	else
		return (0);
}

/**
 * Checks if a number is negative and the changes the 
 *	number pointer by 'n' to its absolute. If the number 
 *	value is LDBL_MIN then 1 is subtracted and 2 
 *	is returned.
 * @param	n [void *] pointer to the number to be checked 
 * @returns	[short] 2 if LDBL_MIN, 1 if negative, 0 if not
**/
short	ft_isnegative_float(void *n)
{
	long double	*num;

	num = (long double *)n;
	if (*num < 0.0L)
	{
		if (*num == __LDBL_MIN__)
		{
			*num = __LDBL_MIN__ + 1.0L;
			return (2);
		}
		*num = *num * -1.0L;
		return (1);
	}
	else
		return (0);
}
