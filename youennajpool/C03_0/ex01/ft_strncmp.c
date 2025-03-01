/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:59:28 by kali              #+#    #+#             */
/*   Updated: 2025/02/25 18:12:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i = 0;
    
    while((s1[i] || s2[i]) && i < n) {
        if(s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}

#include <string.h>
int main() {
    #include <stdio.h>
    printf("%d\n", strncmp("Hello", "Hel", 2));
    printf("%d\n", strncmp("He\0", "Hell", 3));
    printf("%d\n", strncmp("from", "Hel", 2));
    printf("%d\n", strncmp("ana", "hel", 2));
}