/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:54:32 by kali              #+#    #+#             */
/*   Updated: 2025/02/27 16:40:33 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find) {
    int i = 0;
    int j;
    
    while(str[i]) {// i == 12
        j = 0;
        while(to_find[j] != '\0' && str[i + j] == to_find[j])
            j++;
        if(to_find[j] == '\0') return &str[i];
        i++;
    }

    return 0;
}

#include <string.h>
#include <stdio.h>
int main() {
    char *result = ft_strstr("hicham ouzddou hicham", "uassome");
    if (result) {
        printf("result: %s\n", result);
    } else {
        printf("result: Not found\n");
    }
}