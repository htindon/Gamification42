/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgam.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 06:23:09 by htindon           #+#    #+#             */
/*   Updated: 2014/02/04 04:58:29 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGAM_H
# include <stdlib.h>
# include <stdio.h>
# define INPUT_SIZE_MAX 1000

typedef struct		s_project_info
{
	char			*project_name;
	char			*project_folder;
	int				feeling;
}					t_project_info;

char	*readfile(char *filename);
int		writefile(char *filename, char *content, char *mode);
int		getdata(char *filename);

#endif /* LIBGAM_H */
