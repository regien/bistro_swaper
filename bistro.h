/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistro.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:11:37 by gmalpart          #+#    #+#             */
/*   Updated: 2018/04/03 21:49:54 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BISTRO_H
# define BISTRO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define MIN(X, Y)	((X) < (Y) ? (X) : (Y))
# define MAX(X, Y)	((X) < (Y) ? (Y) : (X))

typedef struct		s_number
{
	char	*number;
}					t_number;


#endif
