/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motivred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:52:16 by motivred          #+#    #+#             */
/*   Updated: 2023/10/19 17:19:46 by motivred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *str;

	str = s;
	while (str[n])
		str[n++] = (unsigned char)c;
	return str;

}
/*
int main ()
{
	char str [20] = "redouane el morabet";
	char des = '.';
	ft_memset(str + 13, des, 3*sizeof(char)); 
	printf("%s", str);
	}
	*/
