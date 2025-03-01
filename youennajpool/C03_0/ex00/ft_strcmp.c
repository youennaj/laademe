/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:17:01 by kali              #+#    #+#             */
/*   Updated: 2025/02/26 16:47:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

#include <stdio.h>

int    ft_strcmp1(char *s1, char *s2)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] == s2[i] )
            i++;
        else break;
    }
    return (s1[i] - s2[i]);
}

#include <string.h>
int    main()
{
    printf("%d\n", ft_strcmp1("hello\0", "hello\0"));
    printf("%d", strcmp("hello\0", "Hello1"));
    
}
// int main() {
//     char c[] = "hello";
//     char H[] = "hello";
//     #include <stdio.h>
//     printf("%d", ft_strcmp(c, H));
// }