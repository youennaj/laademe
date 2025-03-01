/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:56:05 by kali              #+#    #+#             */
/*   Updated: 2025/02/26 17:16:20 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str) {
        int i = 0;
        while(str[i]) {
            i++;
        }
        return i;
}

char *ft_strcat(char *dest, char *src) {// dest = "hello\0" src = " hi"
    int i = 0;
    int j = 0;
    i = ft_strlen(dest);
    while(src[j] != '\0')
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
    
    printf("%s\n", ft_strcat(c, b));
    printf("%s\n", strcat(n, b));
}