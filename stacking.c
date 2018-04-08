/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:07:09 by regien            #+#    #+#             */
/*   Updated: 2018/04/08 08:40:47 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistro.h"
#define EQUAL(X) str[i] == X
#define EQUALO(X) str[positions[e]] == X

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



int		*get_positions(char *str, t_total *envio)
{
	int		*holder;
	int		i;
	int		e;

	if (!(holder = ft_memalloc(sizeof(int) * envio->count)))
		return (NULL);
	e = -1;
	i = 0;
	while (str[i])
	{
		if (is_in_dictionary(str[i], envio) == 1)
		{
			holder[++e] = i;
			while (is_in_dictionary(str[i], envio) == 1)
				i++;
		}
		if (EQUAL('(') || EQUAL('+') || EQUAL(')') || EQUAL('-') || \
		EQUAL('-') || EQUAL('*') || EQUAL('/') || EQUAL('%'))
			holder[++e] = i;
		//this is basically white spaces
		i++;
	}
	return (holder);
}

/*
** strlen of every word
*/

int		*len_token(char *str, int *positions, t_total *envio)
{
	int		*holder;
	int		i;
	int		e;

	if (!(holder = ft_memalloc(sizeof(int) * envio->count)))
		return (NULL);
	e = -1;
	while (++e < envio->count)
	{
		if (EQUALO('(') || EQUALO('+') || EQUALO(')') || EQUALO('-') || \
		EQUALO('-') || EQUALO('*') || EQUALO('/') || EQUALO('%'))
			holder[e] = 1;
		else if (is_in_dictionary(str[positions[e]], envio) == 1)
		{
			i = 0;
			while(is_in_dictionary(str[positions[e] + i], envio) == 1)
				i++;
			holder[e] = i;
		}
	}
	// testing only
/*	e = -1;
	while (++e < envio->count)
		printf("pendejada = |%d|\n", holder[e]);*/
	return (holder);
}

int		is_in_dictionary(char value, t_total *envio)
{
	int		i;
	char	*holder;

	holder = envio->dictionary;
	i = -1;
	while (holder[++i])
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

/*
** last part, just make the token and just start doing the stack
*/

void	make_token(char **dest, char *str, int *wordlen, t_total *envio)
{
	int		e;
	int		i;
	int		re;
	int		*post;

	post = envio->positions;
	e = -1;
	while (++e < envio->count)
	{
		re = -1;
		i = post[e];
		while (re < wordlen[e])
		{
			dest[e][re] = str[];
		}
	}
}

char	**tokenize(char *str, t_total *envio)
{
	char	**holder;
	int		*wordlen;
	int		*positions;
	int		e;

	e = -1;
	envio->count = count_token(str, envio);
	printf("pendejada = |%d|\n", envio->count);
	if (!(holder = ft_memalloc(sizeof(char*) * envio->count)))
		return (NULL);
	if (!(envi->positions = get_positions(str, envio)))
		return (NULL);
	if (!(wordlen = len_token(str, envio->positions, envio)))
		return (NULL);
	while (holder[++e] < envio->count)
		holder[e] = ft_memalloc(sizeof(char) * wordlen[e]);
	make_token(holder, str, wordlen, envio);
	return (holder);
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
	
	tokenize("4545+45+45(        78 / 45     )", envio);
	printf("numero = %d\n", 10);
	return (0);
}
