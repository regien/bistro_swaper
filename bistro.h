/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistro.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:11:37 by gmalpart          #+#    #+#             */
/*   Updated: 2018/04/08 04:43:48 by gmalpart         ###   ########.fr       */
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

	// dunno if i can implement another stuff
}					t_total;


#endif
