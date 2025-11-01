/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:34:54 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 15:28:19 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//コンパイル時：gcc testmain.c -L. libft.a(windowsで動作確認
static void	free_content(void *delcon)//for lstdelone, lstclear
{
	free(delcon);
}

static void	put_content(void *content)//for lstiter
{
	printf("In put_content, content:%p(%s)\n", content, (char *)content);
}

static void	*strtolower(void *content)
{
	char	*s = (char *)content;
	char	*d = ft_strdup(s);
	unsigned int	i = 0;
	while (s[i] != 0)
	{
		d[i] = ft_tolower(s[i]);
		++i;
	}
	return (d);
}

int main(void)
{
//test alnum
	ft_putendl_fd("test alnum----------------------",1);
	ft_putnbr_fd(ft_isalnum('A'),1);//must be 0<return
	ft_putnbr_fd(ft_isalnum('2'),1);//,,
	ft_putnbr_fd(ft_isalnum(' '),1);//0
	ft_putendl_fd("",1);
//test strlen
	ft_putendl_fd("test strlen----------------------",1);
	ft_putnbr_fd(ft_strlen("ABCD"), 1);
	ft_putendl_fd("",1);

//test memset
	ft_putendl_fd("test memset----------------------",1);
	char buf1[0x3];
	char buf2[0xf];
	ft_bzero(buf1, 0x2);	
	ft_bzero(buf2, 0xf);
	printf("%s\n", buf1);//\0 *3
	printf("%s\n", buf2);//\0 *16

	ft_memset(buf1, 'a', 2);//a *2
	ft_memset(buf1, 'A', 4);//はみ出る
	ft_memset(buf2, 'b', 6);//b *6
	printf("%s\n", buf1);
	printf("%s\n", buf2);
//test memcpy
	ft_putendl_fd("test memcpy----------------------",1);
	char buf3[] = "abcdef";	
	
	printf("\nmemcpy's works:%s", (char *)ft_memcpy(buf3+2, buf3, 4));//abcd

//test memmove
	ft_putendl_fd("test memmove----------------------",1);
	char buf4[] = "abcdef";
	printf("\nmemmove's works:%s", (char *)ft_memmove(buf4+2, buf4, 4));//abcd

//test strlcpy

	ft_putendl_fd("test strcpy----------------------",1);
	char s0[] = "ABC";
	char d[16];
	//printf("%ld, %s\n",strlcpy(d, s0, 3), d);//3, AB
//	printf("%ld, %s\n", strlcpy(d, s0, 5), d);//3, ABC
//	printf("%ld, %s\n", strlcpy(d, s0, 2), d);//3, A

	printf("%ld, %s\n",ft_strlcpy(d, s0, 3), d);//3, AB
	printf("%ld, %s\n", ft_strlcpy(d, s0, 5), d);//3, ABC
	printf("%ld, %s\n", ft_strlcpy(d, s0, 2), d);//3, A
	printf("%ld, %s\n", ft_strlcpy(d, s0, 0), d);//3, 

//test toupper, tolower

	ft_putendl_fd("test toup,low----------------------",1);
	char c = 'w';
	char c1 = 'X';
	printf("\n%c, %c", ft_toupper(c), ft_tolower(c));//W, w	
	printf("\n%c, %c", ft_toupper(c1), ft_tolower(c1));//X, x

//test strchr, strrchr

	ft_putendl_fd("test strchr, strrchr----------------------",1);
	char s1[] = "ABC";
	printf("\nstrchr's work:%s", ft_strchr(s1, 'A'));//ABC
	printf("\nstrrchr's work:%s", ft_strrchr(s1, 'A'));//ABC
	printf("\nstrrchr's work:%s", ft_strrchr(s1, 'C'));//C
	char t[] = "ABCA";
	printf("\nstrchr's work:%s", ft_strchr(t, 'A'));//ABCA
	printf("\nstrrchr's work:%s", ft_strrchr(t, 'A'));//A
	printf("\nstrrchr's work:%s\n", ft_strrchr(t, 'C'));//CA

//test memchr
	ft_putendl_fd("test memchr----------------------",1);
	char s2[] = "ABCD";
	printf("%s", (char *)ft_memchr(s2, 'B', 4));//BCD
	printf("\n%s", (char *)ft_memchr(s2, 'F', 4));//null

//test memcmp
	ft_putendl_fd("test memcmp----------------------",1);
	char s3[] = "ABCD";
	char t1[] = "ABDF";
	char u[] = "ABCZ";
	printf("%d", memcmp(s3,t1,3));//-1
	printf("%d", memcmp(s3,t1,2));//0
	printf("%d", memcmp(s3,u,4));//-22
	printf("\n%d", ft_memcmp(s3,t1,3));//-1
	printf("%d", ft_memcmp(s3,t1,2));//0
	printf("%d", ft_memcmp(s3,u,4));//-22

//test strnstr
	ft_putendl_fd("test strnstr----------------------",1);
	char b[] = "ABCDEF";
	char l[] = "CD";
	char e[] = {'\0'};	
	printf("%s\n", ft_strnstr(b, e, ft_strlen(b)));//ABCDEF	
	printf("%p\n", ft_strnstr(b, "FG", ft_strlen(b)));//null	
	printf("%s\n", ft_strnstr(b, l, ft_strlen(b)));//CDEF	

//test atoi
	
	ft_putendl_fd("test atoi----------------------",1);
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
`	char s2[] = "";

	printf("%s\n", ft_strjoin(s1, s2));
	*/
//test strtirm

	ft_putendl_fd("test strtrim----------------------",1);
	char s4[] = "  ,!AB!C, ";
	char set[] = " ,!";
	char *ds4 = ft_strtrim(s4, set);
	printf("s:\t#%s# set:\t#%s# trm:\t#%s#\n",s4,set, ds4);//must be "AB!C"
	char s5[] = "xxxyyyxyxyAxy";
	char set1[] = "xy";
	char *ds5 = ft_strtrim(s5, set1);
	printf("s:\t#%s# set:\t#%s# trm:\t#%s#\n",s5,set1, ds5);//must be "A"
	char s6[] = "ABCD";
	char set2[] = "X";
	char *ds6 = ft_strtrim(s6, set2);
	printf("s:\t#%s# set:\t#%s# trm:\t#%s#\n",s6,set2, ds6);//must be "AB!C"
	char s7[] = "ABCD";
	char *set3 = NULL;
	char *ds7 = ft_strtrim(s6, set3);
	printf("s:\t#%s# set:\t%p trm:\t#%s#\n",s7,set3, ds7);//must be "AB!C"
	free(ds4);
	free(ds5);
	free(ds6);
	free(ds7);
//test strsplit
/*	char s[] = "  re   using this track, we simply ask that you put this in your description  ";
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
*/

	ft_putendl_fd("test itoa----------------------",1);
	int	n = INT_MAX;
	printf("int:%d#itoa:%s#\n", n+1,ft_itoa(n+1));//must be undefine move.
	printf("int:%d#itoa:%s#\n", n, ft_itoa(n));
	n = INT_MIN;
	printf("int:%d#itoa:%s#\n", n, ft_itoa(n));
	n = 0;
	printf("int:%d#itoa:%s#\n", n, ft_itoa(n));

//test strmapi -> to the file.
//test striteri - to the file.

//test putchar_fd, putstr_fd, putnbr_fd
	ft_putendl_fd("test putchar_fd, putstr_fd, putnbr_fd------------------", 1);
	ft_putendl_fd("ABC", 1);//ok
	ft_putendl_fd("The unsigned integer types are ideal for uses that treat storage as a bit array. Using an unsigned instead of an int to gain one more bit to represent positive integers is almost never a good idea. Attempts to ensure that some values are positive by declaring variables unsigned will typically be defeated by the implicit conversion rules.", 1);//ok
	ft_putnbr_fd(5000, 1);//
	ft_putendl_fd(0, 1);//nothing output -> ok
//test lstnew
//test lstadd_front, lstsize
/*
	ft_putendl_fd("test lstnew lstadd_front, lstsize------------------", 1);
	
	printf("lstsize:%d\n",ft_lstsize(NULL));//must be 3->ok
	printf("last of list:%p\n", ft_lstlast(NULL));//must be l1`s ptr.->ok
	char *co1 = ft_strdup("THIS IS CONTENT OF L1.");
	if (!co1)
		return (1);
	t_list *l1 = ft_lstnew(co1);
	if (l1)
	{
		ft_putendl_fd(l1->content, 1);//ok
		printf("%p\n",l1->next);//null
	}
	printf("l1:%p, l1->content:%p, l1->next:%p\n",l1, l1->content, l1->next);
	printf("last of list:%p\n", ft_lstlast(l1));//must be l1`s ptr.->ok	
	
	char *co2 = ft_strdup("THIS IS CONTENT OF L2.");
	if (!co2)
		return (1);
	t_list *l2 = ft_lstnew(co2);
	if (l2)
	{
		ft_lstadd_front(&l1, l2);// (front) l2->l1 (end)
	}
	printf("l1:%p, l1->content:%p, l1->next:%p\n",l1, l1->content, l1->next);
	printf("l2:%p, l2->content:%p, l2->next:%p\n",l2, l2->content, l2->next);//must be begginning
	printf("lstsize:%d\n",ft_lstsize(l2));//must be 2->ok
	char *co3 = ft_strdup("THIS IS CONTENT OF L3.");
	if (!co3)
		return (1);
	t_list *l3 = ft_lstnew(co3);
	if (l3)
	{
		ft_lstadd_front(&l2, l3);// (front) l3->l2->l1 (end)
	}
	printf("l1:%p, l1->content:%p(%s), l1->next:%p\n",l1, l1->content,(char *)l1->content, l1->next);
	printf("l2:%p, l2->content:%p(%s), l2->next:%p\n",l2, l2->content,(char *)l2->content, l2->next);
	printf("l3:%p, l3->content:%p(%s), l3->next:%p\n",l3, l3->content,(char *)l3->content, l3->next);//must be begginning->ok
	printf("lstsize:%d\n",ft_lstsize(l3));//must be 3->ok
	printf("last of list:%p\n", ft_lstlast(l3));//must be l1`s ptr.->ok
//test lstdelone
	printf("l1:%p, l1->content:%p(%s), l1->next:%p\n",l1, l1->content,(char *)l1->content, l1->next);
	printf("l2:%p, l2->content:%p(%s), l2->next:%p\n",l2, l2->content,(char *)l2->content, l2->next);
	printf("l3:%p, l3->content:%p(%s), l3->next:%p\n",l3, l3->content,(char *)l3->content, l3->next);
//test lstclear
	ft_lstclear(&l2, free_content);
//	printf("l1:%p, l1->content:%p(%s), l1->next:%p\n",l1, l1->content,(char *)l1->content, l1->next);
//	printf("l2:%p, l2->content:%p(%s)",l2, l2->content,(char *)l2->content);//must be delete,and ptr_l2 = NULL. 
//	printf("l3:%p, l3->content:%p(%s), l3->next:%p\n",l3, l3->content,(char *)l3->content, l3->next);//must be exsit.
	printf("last of list:%p\n", ft_lstlast(l3));//must be l1`s ptr.->ok
	ft_lstclear(&l3, free_content);//must be NON LEAK->ok.
*/
//test lstadd_back
	printf("test lstadd_back------------------------------\n");
	char	*content_front =	ft_strdup("THIS IS THE CONTENT OF NODE_FRONT!");
	char	*content_second =	ft_strdup("THIS IS THE CONTENT OF NODE_SECOND!");
	char	*content_third =	ft_strdup("THIS IS THE CONTENT OF NODE_THIRD!");
	//error check/////////////
	if (!content_front) return (1);
	if (!content_second){free(content_front); return (1);};
	if (!content_third){free(content_front); free(content_second); return (1);};
	t_list	*node_front =	ft_lstnew(content_front);
	t_list	*node_second =	ft_lstnew(content_second);
	t_list	*node_third =	ft_lstnew(content_third);
	if (!node_front){free(content_front);return (1);}
	if (!node_second){ft_lstclear(&node_front, free_content); return (1);};
	if (!node_third){ft_lstclear(&node_front,  free_content); return (1);};
	//add back////////////////////////
	ft_lstadd_back(&node_front, node_second);
	ft_lstadd_back(&node_front, node_third);//must be like this,(front->second->third->NULL).
	if ((node_front->next == node_second) && (node_second->next == node_third))
		printf("SUCCESSED:linked.\n");
	//out/////////////////////////////
	printf("node_front :%p, ->content:%p(%s), ->next:%p\n",node_front, node_front->content,(char *)node_front->content, node_front->next);
	printf("node_second:%p, ->content:%p(%s), ->next:%p\n",node_second, node_second->content,(char *)node_second->content, node_second->next);
	printf("node_third :%p, ->content:%p(%s), ->next:%p\n",node_third, node_third->content,(char *)node_third->content, node_third->next);
//test lstiter
	ft_lstiter(node_front, put_content);
	//delete all node.///////////////////////////////////
	ft_lstclear(&node_front, free_content);
	printf("clear done.\n\n");

//test lstmap
	
	printf("test lstmap------------------------------\n");
	content_front =	ft_strdup("THIS IS THE CONTENT OF NODE_FRONT!");
	content_second =	ft_strdup("THIS IS THE CONTENT OF NODE_SECOND!");
	content_third =	ft_strdup("THIS IS THE CONTENT OF NODE_THIRD!");
	//error check/////////////
	if (!content_front) return (1);
	if (!content_second){free(content_front); return (1);};
	if (!content_third){free(content_front); free(content_second); return (1);};
	node_front =	ft_lstnew(content_front);
	node_second =	ft_lstnew(content_second);
	node_third =	ft_lstnew(content_third);
	if (!node_front){free(content_front);return (1);}
	if (!node_second){ft_lstclear(&node_front, free_content); return (1);};
	if (!node_third){ft_lstclear(&node_front,  free_content); return (1);};
	//link all nodes.////////////////////////
	ft_lstadd_back(&node_front, node_second);
	ft_lstadd_back(&node_front, node_third);//must be like this,(front->second->third->NULL).
	if ((node_front->next == node_second) && (node_second->next == node_third))
		printf("SUCCESSED:linked.\n");
printf("node_front :%p, ->content:%p(%s), ->next:%p\n",node_front, node_front->content,(char *)node_front->content, node_front->next);
	printf("node_second:%p, ->content:%p(%s), ->next:%p\n",node_second, node_second->content,(char *)node_second->content, node_second->next);
	printf("node_third :%p, ->content:%p(%s), ->next:%p\n",node_third, node_third->content,(char *)node_third->content, node_third->next);
	//test lstmap////////////////////
	t_list	*node_front_new = ft_lstmap(node_front, strtolower, free_content);//lst -> make new lst -> free lst.
	if (!node_front_new)
	{
		ft_lstclear(&node_front, free_content);
		return (1);
	}
	//out/////////////////////
	ft_lstiter(node_front_new, put_content);
	//delete all node.///////////////////////////////////
	ft_lstclear(&node_front, free_content);
	ft_lstclear(&node_front_new, free_content);
	printf("clear done.\n\n");
	return (0);
}
