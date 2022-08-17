/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:11:15 by jocardos          #+#    #+#             */
/*   Updated: 2022/05/26 16:57:59 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

// Main usada para testar a parte bônus
int main(int argc, char **argv)
{
	char	*line;
	int		i;
	int		fd;
	int		count;

	if (argc < 2)
		return (0);
	count = 1;
	printf("\n============================================================================================================================================\n");
	printf("                                                            PRIMEIRO ARQUIVO                                                                  ");
	printf("\n============================================================================================================================================\n");
	printf("\n");
	while(count < argc)
	{
		fd = open(argv[count++], O_RDONLY);
		i = 1;
		while (i < 3000)
		{
			line = get_next_line(fd);
			printf("Linha [%02d]: %s\n", i, line);
			free(line);
			i++;
			if (line == NULL)
				break;
		}
		close(fd);
		if (argc != count)
		{
		printf("\n============================================================================================================================================\n");
		printf("                                                             PRÓXIMO ARQUIVO                                                                  ");
		printf("\n============================================================================================================================================\n");
		printf("\n");
		}
	}
}

/*
// Main somente para a parte Mandatory
int main(void)
{
	char *line;
	int	i;
	int fd;

	i = 0;
	fd = open("testes/teste1", O_RDONLY); // Aqui é só alterar o número do arquivo que deseja testar
	while(i < 3000)
	{
		line = get_next_line(fd);
		printf("Linha [%04d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
}
*/
