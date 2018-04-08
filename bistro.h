/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistro.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:11:37 by gmalpart          #+#    #+#             */
/*   Updated: 2018/04/08 08:40:49 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BISTRO_H
# define BISTRO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "libft.h"
# define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
# define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

typedef struct		t_node
{
	char			*str;
	struct t_node	*next;
}					s_node;

typedef struct		t_stack
{
	s_node			*stack;
	int				size;
	int				top;
}					s_stack;

typedef struct		s_total
{
	int				base;
	char			*dictionary;
	// numbers of tokens
	int				count;
	int				*positions;
	// dunno if i can implement another stuff
}					t_total;

int		*get_positions(char *str, t_total *envio);
int		is_in_dictionary(char value, t_total *envio);
int		count_token(char *str, t_total *envio);
char	**tokenize(char *str, t_total *envio);

#endif
