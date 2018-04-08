/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:07:09 by regien            #+#    #+#             */
/*   Updated: 2018/04/07 17:40:43 by regien           ###   ########.fr       */
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

int		*len_token(char *str, int words)
{
	int		*holder;
	int		i;

	(!(holder = malloc(sizeof(int) * words)))
			return (NULL);
	i = 0;
	while (str[i])
	{
		
	}

}

int		count_token(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
			while (str[i] >= '0' && str[i] <= '9')
				i++;
		}
		if (EQUAL('(') || EQUAL('+') || EQUAL(')') || EQUAL('-') || \
		EQUAL('-') || EQUAL('*') || EQUAL('/') || EQUAL('%'))
			count++;
		//this is basically white spaces
		i++;
	}
	return (count);
}



char	**tokenize(char *str)
{
	int		count;
	int		*wordlen;
	char	**holder;

	count = count_token(str);
	printf("pendejada = |%d|\n", count);
	if (!(holder = malloc(sizeof(char*) * count)))
		return (NULL);
	if (!(wordlen = len_token(str, count)))
		return (NULL);


	
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
