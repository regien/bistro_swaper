/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:20:42 by gmalpart          #+#    #+#             */
/*   Updated: 2018/04/07 16:08:11 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef	struct		s_node
{
	long long int	len;
	int				sign;
	struct s_node	*next;
}					t_node;


typedef struct		s_stack
{
	t_node			*queue;
	int				size;
	t_node			*top;
}					t_stack;

#endif
