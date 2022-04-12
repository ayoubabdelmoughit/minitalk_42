/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:40:26 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/04/10 12:40:26 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int ft_isvalid (int c, char *pid)
{
	int i;
	
	i=0;
	if(c != 3)
	{
		ft_putstr_fd("\x1B[31mWrong Args!\n\x1B[0m", 1);
		return (0);
	}
	while (pid[i])
	{
		if(ft_isdigit(pid[i]) == 0)
		{
			ft_putstr_fd("\x1B[31mBad PID!\n\x1B[0m", 1);
			return(0);
		}
		i++;
	}
	if(ft_atoi(pid) == 0 || kill(ft_atoi(pid), 0) == -1)
	{
		ft_putstr_fd("\x1B[31mPID Not Worked!\n\x1B[0m", 1);
		return(0);
	}
	return(1);
}

int main(int argc, char **argv)
{
	int pid;
	//size_t i;
	char *msg;
	//i=0;
	if(ft_isvalid(argc, argv[1]))
	{
		pid = ft_atoi(argv[1]);
		msg = argv[2];
	}
	
}