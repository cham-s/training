#include <stdlib.h>
#include <stdio.h>

typedef struct s_node
{
	struct	s_node *next;
	int		data;
} t_node;

t_node *create_node(int value)
{
	t_node *new = malloc(sizeof(t_node *));
	new->data = value;
	new->next = NULL;
	return (new);
}


int main()
{
	t_node *n = create_node(5);
	printf("value: %d\n", n->data);
}
