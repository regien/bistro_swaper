#include "bistro.h"

// realloc 2 string
//


/*
	int		makestrequal(char *str1, char *str2)
	{
	int		len1 = strlen(str1);
	int		len2 = strlen(str2);
	char	*temp;
	int		i;

	i = -1;
	if (len1 < len2)
	{
	i = -1;

	while (++i < len1 - len2)
// have to realloc a str2;
}
}

char	


char		*multiply(char *str1, char *str2)
{
int		n1;
int		n2;
int		iter1;
int		iter2;


iter1 = 0;
iter2 = 0;

n1 = strlen(str1);
n2 = strlen(str2);

if (n1 == 0 || n2 == 0)
return ("0");

int		*result;

result = malloc(sizeof(int) * )
}

// test multiplication
int main(void)
{
char	*str1="94546545646464545445454"
char	*str2="8848484848484884848484844848";

printf("string = |%s|", multiply(str1, str2));
}
*/


char	*chooser(int change, char *str1, char *str2)
{
	char	*temp;
	int		i;
	
	i = -1;
	if (change == 0 )
		temp = malloc(sizeof(char) * strlen(str1) + 1);
	else if (change == 1)
		temp = malloc(sizeof(char) * strlen(str1) + 1);
	else
		temp = malloc(sizeof(char) * strlen(str2) + 1);
	while (++i < MAX(strlen(str1), strlen(str2)))
		temp[i] = 0;
	return (temp);
}

char	*adding(char *str1, char *str2)
{
	int		carry;
	int		len1;
	int		len2;
	char	*temp;
	int		change;
	// change 0 equal / 1 is bigger / 2 is bigger

	int		i;

	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 != len2)
	{
		if (len1 > len2)
			change = 1;
		else
			change = 2;
	}
	else
		change = 0;
	temp = chooser(change, str1, str2);
	len1--;
	len2--;
	while(str1[len1] && str2[len2])
	{
		if ((str1[len1] - '0') + (str2[len2] - '0') >= 10)
			;
//			temp;
	}
	return (temp);
}

/*
char	*restring(char *str1, int len)
{
	// so far i havent think about negatives
	// only positive
	int		lenstr;
	char*	temp;
	int		i;
	int		e;
	int		filler;

	lenstr = strlen(str1);
	if (lenstr > len)
		return (NULL);
	filler = len - lenstr;
	temp = malloc(sizeof(char) * len);
	i = -1;
	e = -1;
	//	bzero(temp, sizeof(char));
	// strcpy manually 
	
	while (filler >= 0)
		temp[filler--] = 0;
	filler = len - lenstr;
	while (++i < lenstr)
	{
		++e;
		temp[i + filler] = str1[e];
	}
	return (temp);
}
*/

char	*adder(char *str1, char *str2)
{
	int		carry;
	int		len1;
	int		len2;
	int		i;
	int		e;
	char	*solu;
	char	*incase;
	int		temp;

	incase = NULL;
	carry = 0;
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (!(solu = malloc(sizeof(char) * MAX(len1, len2))))
		return (NULL);
	i = -1;
	e = MAX(len1, len2);
	solu[e] = '\0';
	while(--e >= 0)
		solu[e] = 0;
	e = MAX(len1, len2);
	while(str1[--len1] && str2[--len2])
	{
		temp = (str1[len1] - '0') + (str2[len2] - '0') + carry;
		if (temp >= 10)
		{
			carry = temp / 10;
			temp = temp % 10;
		}
		// temp >= 10 : carry= = temp / 10 ? 0;
		solu[--e] = temp;
		if (e == 0 && carry != 0)
		{
			incase = restring()
		}
			// implement restring;
	}
	return (solu);
}


char	*restring(char *str, int len)
{
	int		lenstr;
	char	*holder;
	int		i;
	int		e;

	lenstr = strlen(str);
	if(!(holder = malloc(sizeof(char) * len)))
		return (NULL);
	i = -1;
	while(++i < len)
		holder[i] = '0';
	i = strlen(str);
	e = len;
	while(--i >= 0)
	{
		--e;
		holder[e] = str[i];
	}
	holder[len] = '\0';
	return (holder);
}

int main(void)
{
	printf("string nueva = |%s|\n", restring("1123456789", 18));
	printf("what im doing \n");
}
