
int	ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	
	while((*str >= 7 && *str <= 13) || *str == 32)
		str++;
	while(*str == '+' || *str == '-')
	{
		if(*str == '+')
			str++;
		else if(*str == '-')
		{
			sign = -1;
			str++;
		}
	}
	
	while(*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (*str - 48);
		str++;
	}
	return result * sign;

}
