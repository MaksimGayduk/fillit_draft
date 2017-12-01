/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:26:28 by mgayduk           #+#    #+#             */
/*   Updated: 2017/12/01 17:32:48 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFORMER_H
# define TRANSFORMER_H

typedef struct		s_coords
{
	int				row;
	int				col;
}					t_coords;

typedef struct		s_tetro
{
	t_coords		coords[4];
	struct	tetro	*next;
}					t_tetro;

#endif
