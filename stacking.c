/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:07:09 by regien            #+#    #+#             */
/*   Updated: 2018/04/08 05:08:57 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"
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



int		*get_positions(char *str, int words, t_total *envio)
{
	int		*holder;
	int		i;
	int		e;

	if (!(holder = ft_memalloc(sizeof(int) * words)))
		return (NULL);
	e = 0;
	i = 0;
	while (str[i])
	{
		// change this for the base numbers
/*		if (str[i] >= '0' && str[i] <= '9')
		{
			holder[e] = i;
			while (str[i] >= '0' && str[i] <= '9')
				i++;
		}*/
		if (is_in_dictionary(str[i], envio) == 1)
			count++;
			while (is_in_dictionary(str[i], envio) == 1)
				i++;
		if (EQUAL('(') || EQUAL('+') || EQUAL(')') || EQUAL('-') || \
		EQUAL('-') || EQUAL('*') || EQUAL('/') || EQUAL('%'))
			count++;
		//this is basically white spaces
		i++;
	}
	return (holder);
}

/*
int		*len_token(char *str, int words)
{
	int		*holder;
	int		i;
	int		e;
//	int		*getpos;

//	getpos = get_positions(str, words);
	if (!(holder = ft_memalloc(sizeof(int) * words)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		
	}
	return (holder);
}
*/

int		is_in_dictionary(char value, t_total *envio)
{
	int		i;
	char	*holder;

	holder = envio->dictionary;
	i = -1;
	while(holder[++i])
	{
		if (value == holder[i])
			return (1);
	}
	return (0);
}

/*
** is_in_dictionary is basically for matching number in the base
** so you can check with any str at the base they give you
*/

int		count_token(char *str, t_total *envio)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_in_dictionary(str[i], envio) == 1)
			count++;
			while (is_in_dictionary(str[i], envio) == 1)
				i++;
		if (EQUAL('(') || EQUAL('+') || EQUAL(')') || EQUAL('-') || \
		EQUAL('-') || EQUAL('*') || EQUAL('/') || EQUAL('%'))
			count++;
		//this is basically white spaces
		i++;
	}
	return (count);
}



char	**tokenize(char *str, t_total *envio)
{
	int		count;
	int		*wordlen;
	char	**holder;
	int		*positions;

	count = count_token(str, envio);
	printf("pendejada = |%d|\n", count);
	if (!(holder = ft_memalloc(sizeof(char*) * count)))
		return (NULL);
	if (!(positions = get_positions(str, count, envio)))
		return (NULL);
//	if (!(wordlen = len_token(str, count)))
//		return (NULL);


	
	return (NULL);
}


int main(int ac, char **av)
{
	// this thing is not going to work if the parser explodes
	t_total		*envio;

	envio = ft_memalloc(sizeof(t_total));
	// error handeling | if strlen(av[1]) != ft_atoi(av[2])
	//					^this should fail
	envio->base = ft_atoi(av[2]);
	envio->dictionary = ft_strdup(av[1]);
	
	tokenize("45+45+45(        78 / 45     )", envio);
	printf("numero = %d\n", 10);
	return (0);
}
