/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:34:54 by skazama           #+#    #+#             */
/*   Updated: 2025/10/24 07:18:33 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
int main(void)
{
/*
//test alnum
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('2'));
	printf("%d", ft_isalnum(' '));
//test strlen
	printf("%ld", ft_strlen("ABCD"));
*/
//test memset
/*	char buf1[0x3];
	char buf2[0xf];
	ft_bzero(buf1, 0x2);	
	ft_bzero(buf2, 0xf);
	printf("%s\n", buf1);//\0 *3
	printf("%s\n", buf2);//\0 *16

	ft_memset(buf1, 'a', 2);//a *2
	ft_memset(buf1, 'A', 4);//はみ出る
	ft_memset(buf2, 'b', 6);//b *6
	printf("%s\n", buf1);
	printf("%s\n", buf2);*/
//test memcpy
/*
	char buf1[] = "abcdef";	
	
	printf("\nmemcpy's works:%s", (char *)ft_memcpy(buf1+2, buf1, 4));//abcd

//test memmove
	char buf2[] = "abcdef";
	printf("\nmemmove's works:%s", (char *)ft_memmove(buf2+2, buf2, 4));//abcd
*/
//test strlcpy
/*
	char *s = "ABC";
	char d[16];
//	printf("%ld, %s",strlcpy(d, s, 3), d);//3, AB
//	printf("%ld, %s", strlcpy(d, s, 5), d);//3, ABC
//	printf("%ld, %s", strlcpy(d, s, 2), d);//3, A

	printf("%ld, %s",ft_strlcpy(d, s, 3), d);//3, AB
	printf("%ld, %s", ft_strlcpy(d, s, 5), d);//3, ABC
	printf("%ld, %s", ft_strlcpy(d, s, 2), d);//3, A
	printf("%ld, %s", ft_strlcpy(d, s, 0), d);//3, 
*/
//test toupper, tolower
/*	char c = 'w';
	char d = 'X';
	printf("\n%c, %c", ft_toupper(c), ft_tolower(c));//W, w	
	printf("\n%c, %c", ft_toupper(d), ft_tolower(d));//X, x
*/
//test strchr, strrchr
/*	
	char s[] = "ABC";
	printf("\nstrchr's work:%s", ft_strchr(s, 'A'));//ABC
	printf("\nstrrchr's work:%s", ft_strrchr(s, 'A'));//ABC
	printf("\nstrrchr's work:%s", ft_strrchr(s, 'C'));//C
	char t[] = "ABCA";
	printf("\nstrchr's work:%s", ft_strchr(t, 'A'));//ABCA
	printf("\nstrrchr's work:%s", ft_strrchr(t, 'A'));//A
	printf("\nstrrchr's work:%s", ft_strrchr(t, 'C'));//CA
	*/
//test memchr
/*	char s[] = "ABCD";
	printf("%s", (char *)ft_memchr(s, 'B', 4));//BCD
	printf("\n%s", (char *)ft_memchr(s, 'F', 4));//null
*/
//test memcmp
/*	char s[] = "ABCD";
	char t[] = "ABDF";
	char u[] = "ABCZ";
	printf("%d", memcmp(s,t,3));//-1
	printf("%d", memcmp(s,t,2));//0
	printf("%d", memcmp(s,u,4));//-22
	printf("\n%d", ft_memcmp(s,t,3));//-1
	printf("%d", ft_memcmp(s,t,2));//0
	printf("%d", ft_memcmp(s,u,4));//-22
*/
//test strnstr
/*	char b[] = "ABCDEF";
	char l[] = "CD";
	char e[] = {'\0'};	
	printf("%s\n", ft_strnstr(b, e, ft_strlen(b)));//ABCDEF	
	printf("%p\n", ft_strnstr(b, "FG", ft_strlen(b)));//null	
	printf("%s\n", ft_strnstr(b, l, ft_strlen(b)));//CDEF	
*/
//test atoi
/*	
	printf("atoi:%d\n", atoi(" 100"));//100
	printf("atoi:%d\n", atoi(" str"));//0	
	printf("atoi:%d\n", atoi("\t\v 222"));//222	
	printf("atoi:%d\n", atoi(" -123str"));//123	
	printf("atoi:%d\n", atoi(" -2147483649"));//undifined
	
	
	printf("ft_atoi:%d\n", ft_atoi(" 100"));//100
	printf("ft_atoi:%d\n", ft_atoi(" str"));//0	
	printf("ft_atoi:%d\n", ft_atoi("\t\v 222"));//222	
	printf("ft_atoi:%d\n", ft_atoi(" -123str"));//123	
	printf("ft_atoi:%d\n", ft_atoi(" -2147483649"));//0
*/
//test calloc
/*	char	*s = (char *)calloc(3, sizeof(char));
	int	*n = (int *)calloc(3, sizeof(int));
	int	*m = (int *)calloc(0, sizeof(int));	
	s[0] = 'Q';
	s[1] = 'W';
	printf("%s\n", s);
	for (int i = 0; i < 3; ++i)
	{
		printf("%d",n[i]);//000
	}	
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		n[i] = i;
		printf("%d",n[i]);//012
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%d",m[i]);//0??
	}
	free(s);
	free(n);
	free(m);
	s = NULL;
	n = NULL;
	m = NULL;
	printf("\n---------------\n");
	s = (char *)calloc(3, sizeof(char));
	n = (int *)calloc(3, sizeof(int));
	m = (int *)calloc(0, sizeof(int));
	s[0] = 'Q';
	s[1] = 'W';
	printf("%s\n", s);
	for (int i = 0; i < 3; ++i)
	{
		printf("%d", n[i]);//000
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		n[i] = i;
		printf("%d",n[i]);//012
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%d", m[i]);//0??
	}
	free(s);
	free(n);
	free(m);
*/
//test strdup
/*
	char s[] = "ABCDEF";
	char *d = ft_strdup(s);
	if (d)
		printf("%s",d);
*/
//test substr
/*
	char s[] = "ABC";
	printf("%s\n", ft_substr(s, 0, 3));//3文字coy ABC->ok
	printf("%s\n", ft_substr(s, 1, 4));//２文字cpy BC->ok	
	printf("%s\n", ft_substr(s, 2, 1));//1文字cpy C	->ok
	printf("%s\n", ft_substr(s, 2, 0));//0文字cpy  ->ok
	printf("%s\n", ft_substr(s, 5, 4));//sの外、0文字cpy ->ok	
	printf("%s\n", ft_substr(s, 3, 4));//sの外、0文字cpy ->ok
	printf("%s\n", ft_substr(s, 3, 1));//sの外、0文字cpy
	printf("%s\n", ft_substr(s, 0, 0));//0文字cpy ->ok
*/
//test strjoin
/*
	char s1[] = "ABCDEF";
	char s2[] = "";

	printf("%s\n", ft_strjoin(s1, s2));
	*/
//test strtirm
/*
	char s[] = "i am man. good see you again.";
	char set[] = "me ";
	printf("%s", ft_strtrim(s, set));
*/
//test strsplit
	char s[] = "  re   using this track, we simply ask that you put this in your description  ";
	char **d = ft_split(s, ' ');
	char **d2 = ft_split(s, 'y');
	size_t i = 0;
	while (d[i] != NULL)
	{
		printf("main:d[%ld]:#%s#\n",i,d[i]);
		++i;
	}
	i = 0;
	while (d2[i] != NULL)
	{
		printf("main:d2[%ld]:#%s#\n",i,d2[i]);
		++i;
	}
	return (0);
}
