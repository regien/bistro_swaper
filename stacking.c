/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:07:09 by regien            #+#    #+#             */
/*   Updated: 2018/04/07 17:13:13 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#define EQUAL(X) str[i] == X

/*
** Init tokenize
** this is for counting the numbers of allocations and the len
** ^ basically strsplit for tokens in a smart ways
** if can be easily change it for base characters if we just change it for the
** numbers.
**
** base conversion has a formula
** we need ^ plus and multiplication working.
**
**
** The str[i] >= '0' && str[i] <= '9'
** can be change in bases
*/


int		count_token(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
//		if (EQUAL('(') || EQUAL('+') || EQUAL(')') || EQUAL('-') || \
//		EQUAL('-') || EQUAL('*') || EQUAL('/') || EQUAL('%'))
//			count++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
			while (str[i] >= '0' && str[i] <= '9')
				i++;
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || \
			str[i] == '/' || str[i] == '%' || str[i] == '(' || \
			str[i] == ')')
				count++;
		//this is basically white spaces
		i++;
	}
	return (count);
}

char	**tokenize(char *str)
{
	int		count;
	
	count = count_token(str);
	printf("pendjeada = |%d|\n", count);
	return (NULL);
}

/*
void	init(void)
{
	return ;
}
*/

int main(void)
{
	// this thing is not going to work if the parser explodes
	
	tokenize("45+45+45(        78 / 45     )");
	printf("numero = %d\n", 10);
	return (0);
}
