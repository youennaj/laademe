/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:21:56 by kali              #+#    #+#             */
/*   Updated: 2025/02/26 17:31:36 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str) {
        unsigned int i = 0;
        while(str[i]) {
            i++;
        }
        return i;
}

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    unsigned int i = 0;
    unsigned int j = 0;
    i = ft_strlen(dest);
    while(src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];// dest[i] = dest[i] + src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

#include <stdio.h>
#include <string.h>

int main() {
    char c[] = "hello";
    char b[] = " hivcfds";
    char n[] = "hello";
    
    printf("%s\n", ft_strncat(c, b, 2));
    printf("%s\n", strncat(n, b, 2));
}