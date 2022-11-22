#include "inc/PicoShell.h"

void    ft_open(void)
{
    pid_t   pid;
    pid = fork();
	if (pid == -1)
		return ;
	else if (!pid)
	{
		execve("/Users/event/.bin/open_script", NULL, get_data(NULL)->env);
		exit (1);
	}
	else
		wait(NULL);
}