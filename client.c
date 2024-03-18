#include "./libft/libft.h"
#include <signal.h>

void	error(char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("client: unexpected error.\n", 2);
	exit(EXIT_FAILURE);
}

int	send_null(int pid, char *str)
{
	static int	i = 0;

	if (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str);
		return (0);
	}
	return (1);
}

int	send_bit(int pid, char *str)
{
	static char	*message;
	static int	s_pid = 0;
	static int	bits = -1;

	if (str)
		message = ft_strdup(str);
	if (!message)
		error(message);
	if (pid)
		s_pid = pid;
	if (message[++bits / 8])
	{
		if (message[bits / 8] & (0x80 >> (bits % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				error(message);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			error(message);
		return (0);
	}
	if (!send_null(s_pid, message))
		return (0);
	free(message);
	return (1);
}

void	signal_handler(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR1)
		end = send_bit(0, NULL);
	else if (signum == SIGUSR2)
		exit(EXIT_FAILURE);
	if (end)
		exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr_fd("client: invalid arguments.\n", 2);
		ft_putstr_fd("correct format: [./client <PID> <STR>].\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}