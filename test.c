#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	int j = 0;
	while (s[j])
		j++;
	return (j);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	len;

	if (dst == NULL && src == NULL)
		return (0);
	a = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	if (dstsize > len)
	{
		b = ft_strlen(src) + len;
		while (src[a] != '\0' && len < dstsize - 1)
		{
			dst[len] = src[a];
			a++;
			len++;
		}
		dst[len] = '\0';
	}
	else
		b = dstsize + ft_strlen(src);
	return (b);
}
#include <stdio.h>
int main()
{
	char dst[] = "hello";
	const char src[] = "world";
	printf("%zu\n ahhh", ft_strlcat(dst, src, 5));
}