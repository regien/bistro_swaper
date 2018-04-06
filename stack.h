/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:20:42 by gmalpart          #+#    #+#             */
/*   Updated: 2018/04/05 22:10:20 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct		t_node
{
	long long int	len;
	int				sign;
	struct t_node	*next;
}					s_node;


typedef struct		t_stack
{
	s_node			*queue;
	int				size;
	s_node			*top;
}					s_stack;

#endif
