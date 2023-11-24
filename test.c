#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	int j = 0;
	while (s[j])
		j++;
	return (j);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	// if (start >= ft_strlen(s))
		// return (ft_strdup(""));
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

int	modified_ft_strchr(char c, const char *s)
{
	int		bop;

	bop = 0;
	while (s[bop] != '\0')
	{
		if (s[bop] == c)
			return (1);
		bop++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tstr;
	size_t	i;
	size_t	start;
	size_t	last;

	start = 0;
	last = ft_strlen(s1);
	while (s1[start] && modified_ft_strchr(s1[start], set))
		start++;
	while (last > start && modified_ft_strchr(s1[last - 1], set))
		last--;
	// tstr = ft_substr(s1, start, last);
	tstr = malloc(sizeof(char) * (last - start + 1));
	if (!tstr)
		return (NULL);
	i = 0;
	while (start < last)
			tstr[i++] = s1[start++];
	tstr[i] = '\0';
	return (tstr);
}
#include <stdio.h>

int main()
{
	char dst[] = "applebeespapapa";
	printf("%s\n", ft_strtrim(dst, "ap"));
}