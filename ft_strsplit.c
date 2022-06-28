#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(char *string)
{
	size_t	len;

	len = 0;
	while(string[len])
	{
		len ++;
	}
	return (len);
}

char	*get_next_sequence(char *string, int index, int len)
{
	char	*sequence;
	int		i;

	len += index;
	i = 0;
	sequence = malloc((len + 1) * sizeof(char));
	while (index < len)
	{
		sequence[i ++] = string[index ++];
	}
	return (sequence);
}

size_t	get_len_sequence(char *string, char *delim, int index)
{
	int		str_index;
	int		delim_index;
	int		to_find;

	to_find = 0;
	str_index = index;
	while (string[str_index] != '\0' && !to_find)
	{
		delim_index = 0;
		while (string[str_index] == delim[delim_index ++])
		{
			if (delim[delim_index] == '\0')
			{
				to_find = 1;
				str_index -= ft_strlen(delim);
			}
			else
				str_index ++;
		}
		str_index ++;
	}
	return (str_index - index);
}

int	get_nb_sequences(char *string, char *delim)
{
	int	index;
	int	len;
	int	nb;

	index = 0;
	nb = 0;
	while (index < ft_strlen(string))
	{
		len = get_len_sequence(string, delim, index);
		index += len + ft_strlen(delim);
		nb ++;
	}
	return (nb);
}
char	**strsplit(char *string, char *delim)
{
	char	**stringsplit;
	int		nb_sequences;
	int		len;
	int		i;
	int		index;

	nb_sequences = get_nb_sequences(string, delim);
	stringsplit = malloc(nb_sequences * sizeof(char *));
	index = 0;
	i = 0;
	while (i < nb_sequences)
	{
		len = get_len_sequence(string, delim, index);
		stringsplit[i] = malloc(len + 1 *sizeof(char));
		stringsplit[i ++] = get_next_sequence(string, index, len);
		index += len + ft_strlen(delim);
	}
	return (stringsplit);
}

int main(void)
{
	char	*string;
	char	*delim;
	char	**stringsplit;
	int		i;

	string = "Janvier,Fevrier,Mars,Avril,Mai,Juin,Juillet,Aout,Septembre,Octobre,Novembre,Decembre";
	delim = ",";
	stringsplit = strsplit(string, delim);
	i = 0;
	while (stringsplit[i])
	{
		printf("%s\n", stringsplit[i ++]);
	}
}
