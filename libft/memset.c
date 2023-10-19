/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motivred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:52:16 by motivred          #+#    #+#             */
/*   Updated: 2023/10/18 00:41:11 by motivred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *memset(void *s, int c, unsigned int n)
{
	
}

int main ()
{
	char str [20] = "redouane el morabet";
	char des = '.';
	memset(str + 13,des,sizeof(char));
	printf("%s", str);
}
