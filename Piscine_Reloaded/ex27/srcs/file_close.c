/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:15:59 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/25 14:22:56 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	close_file(int fd)
{
	close(fd);
}
