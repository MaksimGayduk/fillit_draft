/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:54:09 by mgayduk           #+#    #+#             */
/*   Updated: 2017/11/28 15:39:17 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_CHECKER_H
# define INPUT_CHECKER_H

#include "../libft/libft.h"

typedef struct	s_map_cont
{
	int			hashes;
	int			dots;
	int			new_lines;
	int			len;
}				t_map_cont;

void    check_input(t_list *head);

#endif
