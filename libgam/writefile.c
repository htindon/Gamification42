/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writefile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 06:21:31 by htindon           #+#    #+#             */
/*   Updated: 2014/02/03 06:22:12 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgam.h"

int		writefile(char *filename, char *content, char *mode)
{
	FILE *file = NULL;
	if (mode == "add")
		file = fopen(filename, "a");
	else
		file = fopen(filename, "w");
	if (file != NULL)
	{
		fputs(content, file);
		fclose(file);
	}
	else
		printf("can't open file %s \n", filename);
	return (0);
}
