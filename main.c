#include "lib_rukkyaa.h"

int main(void)
{
	printf("Test pour ft_atoi(\"42\") : %d\n", ft_atoi("42"));
	printf("Test pour ft_factorial(5) : %ld\n", ft_factorial(5));
	printf("Test pour ft_feynman_squares(5) : %lu\n", ft_feynman_squares(5));
	printf("Test pour ft_pow : %lu\n", ft_pow(3,3));
	printf("Test pour ft_remove_whitespaces(\"Salut tout le monde\") : %s\n", ft_remove_whitespaces("Salut tout le monde"));
	printf("Test pour ft_str_to_lower(\"PhrAsE eN MajUsCule et MIN\") : %s\n", ft_str_to_lower("PhrAsE eN MajUsCule et MIN"));
	printf("Test pour ft_str_to_upper(\"PhrAsE eN MajUsCule et MIN\") : %s\n", ft_str_to_upper("PhrAsE eN MajUsCule et MIN"));
	printf("Test pour ft_strcount(\"Il y a 3 fois la lettre a\") : %d\n", ft_strcount("Il y a 3 fois la lettre a", 'a'));
	printf("Test pour ft_strdup(\"Chaine va etre duplique\") : %s\n", ft_strdup("Chaine va etre duplique"));
	printf("Test pour ft_strlen(\"Salut tout le monde\") : %zu \n", ft_strlen("Salut tout le monde"));
}
