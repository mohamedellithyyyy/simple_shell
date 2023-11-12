#include "main.h"

/**
 * main - Entry point for a simple shell
 * Description: This program serves as a simple shell.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * @env: Array of environment variables.
 * Return: Always returns 0.
 */	

int main(int argc, char **argv, char **env)
{
    int point = 1, dot = 0;
    _arg args;
	
    initialize_args(&args, argc, argv, env);

	 while (1)
    {
	 if (isatty(STDIN_FILENO) && point && !args.fd)
        {
	_putchar('$');
	 _putchar(' ');
        }

	signal(SIGINT, new_line);
	 args.i++;	
       	point = command_getter(&args, point, &dot);

	 if (input_helper(&args))
	       	continue;
	
       	args.token = token_maker(args.command, " ");
       		if (command_maker(&args) == 255)	
		prog_exit(&args);
    }

    return 0;
}
