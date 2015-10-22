/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 16:18:57 by tapostin          #+#    #+#             */
/*   Updated: 2015/06/11 16:50:59 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_bzero(void *s, int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *b, int c, int len);
int		ft_strlen(char *str);
int		ft_puts(char *str);
char	*ft_memcpy(char *dest, char *src, int len);
char	*ft_strcat(char *s1, char *s2);
int		ft_isspace(int c);
char	*ft_strdup(char *s);
void	ft_cat(int fd);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
char	*ft_strcpy(char	*dst, char *src);


void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		main(int argc, char **argv)
{
	int		i;
	char *str;
	char *str2;
	char *cpy;

	printf("\n-------------------- PART 1 ----------------------------\n");

	printf("ft_bzero(str, 2):\n");
	str = strdup("coucou");
	printf("str avant : %s\n", str);
	ft_bzero(str, 2);
	printf("str apres : %s\n", str);

	printf("\nft_strcat(str1, str2) :\n");
	str = malloc(50);
	ft_bzero(str, 50);
	ft_strcat(str, "test");
	printf("str1 : %s\n", str);
	printf("str2 : coucou \n");
	ft_strcat(str, strdup("coucou"));
	printf("str1 : %s\n", str);

	printf("\nft_isalpha :\n");
	i = ft_isalpha('a');
	printf("a : %d\n", i);
	i = ft_isalpha('^');
	printf("^ : %d\n", i);

	printf("\nft_max(54 , 12)\n");
	printf("max = %d\n", ft_max(54, 12));
	printf("ft_max(12, 54)\n max = %d\n", ft_max(12, 54));

	printf("\nft_min(12, 54)\n min = %d\n", ft_min(12, 54));
	printf("\nft_min(54, 12)\n min = %d\n", ft_min(54, 12));


	printf("\nft_isdigit :\n");
	i = ft_isdigit('2');
	printf("2 : %d\n", i);
	i = ft_isdigit('a');
	printf("a : %d\n", i);

	printf("\nft_isalnum :\n");
	i = ft_isalnum('2');
	printf("2 : %d\n", i);
	i = ft_isalnum('a');
	printf("a : %d\n", i);
	i = ft_isalnum(32);
	printf("' ' : %d\n", i);
	i = ft_isalnum(59);
	printf("';' : %d\n", i);
	i = ft_isalnum(93);
	printf("']' : %d\n", i);

	printf("\nft_isascii :\n");
	i = ft_isascii('a');
	printf("a : %d\n", i);
	i = ft_isascii(130);
	printf("%c : %d\n", 130, i);

	printf("\nft_isprint :\n");
	i = ft_isprint(' ');
	printf("' ' : %d\n", i);
	i = ft_isprint('\t');
	printf("'\t' : %d\n", i);

	printf("\nft_toupper : \n");
	i = ft_toupper('a');
	printf("a : %c\n", i);
	i = ft_toupper('S');
	printf("S : %c\n", i);

	printf("\nft_tolower : \n");
	i = ft_tolower('Y');
	printf("Y : %c\n", i);
	i = ft_tolower('b');
	printf("b : %c\n", i);

	printf("\nft_puts : \n");
	str = strdup("coucou");
	ft_putstr("coucou : ");
	ft_puts(str);
	ft_putstr("J'aime bien les chats. : ");
	str = strdup("J'aime bien les chats.");
	ft_puts(str);
	ft_putstr("NULL : ");
	ft_puts(NULL);

	printf("\n-------------------- PART 2 ----------------------------\n");

	printf("\nft_strlen : \n");
	str = strdup("coucou");
	i = ft_strlen(str);
	printf("coucou : %d\n", i);
	str = strdup("La vie est belle.");
	i = ft_strlen(str);
	printf("La vie est belle. : %d\n", i);
	i = ft_strlen(NULL);
	printf("NULL : %d\n", i);

	printf("\nft_memset(str, x, 3) : \n");
	str = strdup("coucou");
	printf("str avant: %s\n", str);
	str = ft_memset(str, 'x', 3);
	printf("str apres: %s\n", str);

	printf("\nft_memcpy(dest, src, size) :\n");
	str = strdup("chatschats chats");
	printf("dest : %s\n",str);
	str2 = strdup("j'aime les frites.");
	printf("src : %s\n", str2);
	i = 10;
	printf("size : %d\n", i);
	str = ft_memcpy(str, str2, i);
	printf("dest : %s\n", str);

	printf("\nft_strdup :\n");
	str = ft_strdup("424242");
	printf("424242 : %s\n", str);


	printf("\nft_isspace :\n");
	i = ft_isspace(' ');
	printf("' ' : %d\n", i);
	i = ft_isspace('a');
	printf("a : %d\n", i);

	printf("\n-------------------- ft_cat(fd) ------------------------\n");
	if (argc == 2)
		i = open(argv[1], O_RDONLY);
	else
		i = 0;
	ft_cat(i);
	return (0);
}
