/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 06:22:43 by htindon           #+#    #+#             */
/*   Updated: 2014/02/03 08:22:17 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgam.h"

char		*readfile(char *filename)
{
	char	*chaine;

	FILE *file = NULL;
	file = fopen(filename, "r");
	if (file != NULL)
	{
		chaine = (char *)malloc(INPUT_SIZE_MAX);
		fgets(chaine, INPUT_SIZE_MAX, file);
		fclose(file);
	}
	else
		printf("can't open file %s \n", filename);
	return (chaine);
}
