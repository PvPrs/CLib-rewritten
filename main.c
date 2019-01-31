//
// Created by Dave Van bochove on 14/01/2019.
//

#include "libft.h"
#include "stdio.h"
//
////static int		get_words(char const *s, char c)
////{
////	int index;
////	int words;
////
////	index = 0;
////	words = 0;
////	while (s[index] != '\0')
////	{
////		if (s[index] == c)
////		{
////			index++;
////			printf("%c", s[index]);
////			continue;
////		}
////		else
////		{
////			words++;
////			while (s[index] != c)
////				index++;
////		}
////		index++;
////	}
////	return (words);
////}
//
//int 	ft_get_words(const char *s, char c)
//{
//	int i;
//	int flag;
//	int words;
//
//	i = 0;
//	flag = 0;
//	words = 1;
//	while (s[i])
//	{
//		if (flag == 0 && s[i] != c)
//			flag = 1;
//		if (flag == 1 && s[i] == c)
//		{
//			flag = 0;
//			words++;
//		}
//		i++;
//	}
//	return (words);
//}
////static int		word_count(char const *s, char c)
////{
////	int word_count;
////	int index;
////
////	word_count = 0;
////	index = 0;
////	while (s[index])
////	{
////		if (s[index] == c)
////		{
////			index++;
////			continue;
////		}
////		else
////		{
////			word_count++;
////			while (s[index] != c)
////			{
////				index++;
////			}
////		}
////		index++;
////	}
////	return (word_count);
////}

//static int		ft_get_length(char *s, char c)
//{
//	int i;
//	int start;
//	int len;
//	int flag;
//
//	flag = 0;
//	i = 0;
//	len = 0;
//	while (s[i])
//	{
//		if (flag == 0 && s[i] != c)
//		{
//			if (start == 0)
//				start = i;
//			++len;
//			flag = 1;
//		}
//		if (flag == 1 && s[i] == c)
//		{
//			start = 0;
//			flag = 0;
//		}
//		i++;
//	}
//	return (len);
//}

int 	main(void)
{
    /**
     * ft_isascii
     */
    //printf("%d\n", isascii('a'));
	//printf("%d\n", ft_isascii('a'));
	/**
	 * toupper
	 */
//	char s[] = "      split       this for   me  !       ";
//	int index;
//	index = 0;
//	char **result = ft_strsplit(s, '|');
//	while (result[index])
//    {
//	        printf("%s\n", result[index]);
//	        index++;
//    }

	t_list *l = ft_lstnew(strdup(" 1 2 3 "), 8);
	t_list *ret;

	l->next = ft_lstnew(strdup("ss"), 3);
	l->next->next = ft_lstnew(strdup("-_-"), 4);
	ret = ft_lstmap(l, lstmap_f);
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-")) {
		printf("succes");
		return (1);
	}
	printf("failed");
	return (0);
}