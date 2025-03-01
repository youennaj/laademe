/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 07:50:38 by kali              #+#    #+#             */
/*   Updated: 2025/02/27 17:48:04 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "hello world";
    char src[20] = " from";
    
    // printf("%d\n%s", ft_strlcat(dest, src, 20), dest);
    printf("%d\n%s", strlcat(dest, src, 14), dest);
    printf("\n%s\n", src);
    printf("\n%s\n", dest);
}