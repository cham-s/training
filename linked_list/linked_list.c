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
	if (*list == NULL)
	{
		printf("(empty)");
		return;
	}
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

void	delete_node(t_node **list, int index)
{
	t_node	*tmp;
	if (*list == NULL)
		return;
	if ((*list)->next == NULL && index == 0)
	{
		tmp = *list;
		*list = NULL;
		free(tmp);
		return;
	}
	t_node	*slow = *list;
	t_node	*fast = (*list)->next;
	int		fast_index = 1;
	while (fast != NULL)
	{
		if (index == 0)
		{
			tmp = slow;
			*list = fast;
			free(tmp);
			return;
		}
		if (fast_index == index)
		{
			tmp = fast;
			slow->next = fast->next;
			free(tmp);
			return;
		}
		slow = slow->next;
		fast = fast->next;
		fast_index += 1;
	}
}


int main()
{
	t_node *list = NULL;
	add_node(&list, 0);
	add_node(&list, 1);
	add_node(&list, 2);
	add_node(&list, 3);
	add_node(&list, 4);
	print_list(&list);
	delete_node(&list, 0);
	print_list(&list);
	delete_node(&list, 0);
	print_list(&list);
	delete_node(&list, 0);
	print_list(&list);
	delete_node(&list, 0);
	print_list(&list);
	delete_node(&list, 0);
	print_list(&list);
}
