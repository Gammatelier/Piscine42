/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:38:21 by dhers             #+#    #+#             */
/*   Updated: 2020/08/27 11:00:15 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "bsq2.h"

int		size_line(char *filepath);
void	f_countfreerows(t_point **map, int lines, int sizeline);
void	f_countfreecolumns(t_point **map, int lines, int sizeline);
void	f_printmap(t_point **map, int lines, int sizeline, char *params);
void	f_record(t_point **map, int *lines, int fd, char *params);
void	f_findsquare(t_point **map, int lines, int sizeline, int *root);
void	f_tagsquare(t_point **map, int *root);
void	f_readparams(int fd, int *lines, char *params);
int		f_sizetmp(t_point **map, int lines, int sizeline, int *count);
int		*f_count(int *count);
int		checkfile(char *filepath, int *lines);
int		checkfile2(int *lines, char *par, int *count, int fd);
void	ft_bsq(char *argv, int *lines, char *params, int *root);
void	ft_bsq2(int *lines, char *params, int *root, t_point **map);
void	ft_bsqstdin(int *lines, char *params, int *root);
int		reader_size(int fd, char *buf, int *size);

#endif
