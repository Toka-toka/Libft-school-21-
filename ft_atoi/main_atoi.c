/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:17:42 by sedric            #+#    #+#             */
/*   Updated: 2020/04/30 21:44:47 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int	ft_atoi (const char *str);

int main (void)
{
	int i = 0;
	char t1[] = "000123";
	char t2[] = "123a123";
	char t3[] = "   \t\n\v\f\r   +123";
	char t4[] = "   \t \n \v \f \r -123";
	char t5[] = "   \t\n\v\f\r--123";
	char t6[] = "   \t\n\v\f\r+-123";
	char t7[] = "   \t\n\v\f\r-+123";
	char t8[] = "   \t\n\v\f\r++123";
	char t9[] = "   \t\n\v\f\r0123";
	char t10[] = "   -\t\n\v\f\r0123";
	char t11[] = "   a\t\n\v\f\r0123";
	char t12[] = "   \t\n\v\f\r01a23";
	char t13[] = "   \t\n\v\f\r0000000123";
	char t14[] = "   \t\n\v\f\r0+123";
	char t15[] = "   \t\n\v\f\r0-123";
	char t16[] = "   \b\n\v\f\r0123";
	char t17[] = "-9223372036854775809";
	char t18[] = "9223372036854775808";
	char *tests[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, "\0"};
	while (tests[i][0] != '\0')
	{		
		if (ft_atoi(tests[i]) == atoi(tests[i]))
			printf("test[%d] = OK\n", i+1);
		else 
			printf("tes[%d] = FAILED\n", i+1);
		i++;
	}
//	printf("MAX = %d\n", atoi(tests[16])); 
//	printf("Int min = %ld\nInt max = %ld\n", LONG_MIN, LONG_MAX);
}
