/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:11:12 by dvictor           #+#    #+#             */
/*   Updated: 2019/09/05 17:51:45 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hd.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((i = read(fd, buf, BUF_SIZE)))
		{
			buf[i] = '\0';
			write(1, buf, i);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
