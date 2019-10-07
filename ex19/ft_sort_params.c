/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:11:12 by dvictor           #+#    #+#             */
/*   Updated: 2019/09/04 16:56:02 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_bublesorord(int n, char **argv)
{
	int		fl;
	int		i;
	char	*tmp;

	fl = 1;
	while (fl)
	{
		fl = 0;
		i = 1;
		while (i < n - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				fl = 1;
			}
			i++;
		}
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc <= 1)
		return (0);
	argv = ft_bublesorord(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
