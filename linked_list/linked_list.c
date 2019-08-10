#include <stdlib.h>
#include <stdio.h>

typedef struct s_node
{
	struct	s_node *next;
	int		data;
} t_node;

t_node	*create_node(int value)
{
	t_node *new = malloc(sizeof(t_node *));
	new->data = value;
	new->next = NULL;
	return (new);
}

void	add_node(t_node **list, int value)
{
	if (*list == NULL)
		*list = create_node(value);
	else
	{
		t_node *tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = create_node(value);
	}
}

void	print_list(t_node **list)
{
	t_node *tmp = *list;
	int passed = 0;
	if (!passed)
	{
		printf("value(s): ");
		passed = 1;
	}
	while (tmp != NULL)
	{
		printf("%d", tmp->data);
		if (tmp->next != NULL)
			printf(" ");
		else
			printf("\n");
		tmp = tmp->next;
	}
}


int main()
{
	t_node *list = NULL;
	add_node(&list, 5);
	add_node(&list, 5);
	add_node(&list, 5);
	add_node(&list, 5);
	add_node(&list, 5);
	print_list(&list);
}
