char	*ft_strcpy(char *cpy, char *str)
{
	int	str_index;

	str_index = 0;
	while(str[str_index])
	{
		cpy[str_index] = str[str_index];
		str_index ++;
	}
	return (cpy);
}
