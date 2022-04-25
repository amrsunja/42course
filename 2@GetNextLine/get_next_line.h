/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:26:28 by aazdoev           #+#    #+#             */
/*   Updated: 2022/04/25 18:13:33 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // TODO: delete

char		*get_next_line(int fd);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *s);
// fd : le descripteur de fichier depuis lequel lire
//
// Le contenu de la ligne lue : comportement correct
// NULL : rien d’autre à lire ou une erreur s’est
// produite

#endif
