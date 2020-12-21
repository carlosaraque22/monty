#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
#include <string.h>

void (*get_function(char *line))(stack_t **, unsigned int)
{
	instruction_t ops[] = {
		{"pall", _pall},
		{"push", _push},
		{NULL, NULL}
	};
	int i = 0;
	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(ops[i].opcode, line) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
