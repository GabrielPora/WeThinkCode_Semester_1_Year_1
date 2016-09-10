/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviwel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 09:00:27 by daviwel           #+#    #+#             */
/*   Updated: 2016/08/25 15:52:45 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assembler.h>

void	free_input(t_info *info)
{
	int	i;

	i = 0;
	while (info->input[i])
	{
		free(info->input[i]);
		i++;
	}
	free(info->input);
}
