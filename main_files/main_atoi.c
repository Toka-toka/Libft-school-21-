/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:17:42 by sedric            #+#    #+#             */
/*   Updated: 2020/05/06 16:16:54 by sedric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int	ft_atoi (const char *str);

int main (void)
{
	int i = 0;
	char *tests[25];
	tests[0] = "000123";
	tests[1] = "123a123";
	tests[2] = "   \t\n\v\f\r   +123";
	tests[3] = "   \t \n \v \f \r -123";
	tests[4] = "   \t\n\v\f\r--123";
	tests[5] = "   \t\n\v\f\r+-123";
	tests[6] = "   \t\n\v\f\r-+123";
	tests[7] = "   \t\n\v\f\r++123";
	tests[8] = "   \t\n\v\f\r0123";
	tests[9] = "   -\t\n\v\f\r0123";
	tests[10] = "   a\t\n\v\f\r0123";
	tests[11] = "   \t\n\v\f\r01a23";
	tests[12] = "   \t\n\v\f\r0000000123";
	tests[13] = "   \t\n\v\f\r0+123";
	tests[14] = "   \t\n\v\f\r0-123";
	tests[15] = "   \b\n\v\f\r0123";
	tests[16] = "-9223372036854775809";		// over min long
	tests[17] = "9223372036854775808";		// over max long
	tests[18] = "-9223372036854775808";		// min long
	tests[19] = "9223372036854775807";		// max long
	tests[20] = "99223372036854775807";		// over 10^20
	tests[21] = "-2147483648";				// min int
	tests[22] = "2147483647";				// max int
	tests[23] = "-2147483649";				// over min int
	tests[24] = "2147483648";				// over max int
//	tests[25] = "\0";
	while (i != 25)
	{		
		if (ft_atoi(tests[i]) == atoi(tests[i]))
			printf("test[%d] = OK\n", i+1);
		else 
		{	
			printf("tes[%d] = FAILED\n", i+1);
			printf("atoi = %d\n ft_atoi = %d\n", atoi(tests[i]), ft_atoi(tests[i])); 
		}
		i++;
	}
	printf("Long min = %ld\nLong max = %ld\n", LONG_MIN, LONG_MAX);
	printf("Int min = %d\nInt max = %d\n", INT_MIN, INT_MAX);
	return (0);
}
