#include "sort.h"
/**
  *insertion_sort_list - an implementation of the insertion sort algorithm
  *@list: the head of the doubly linked list
  *
  *Return: void
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur;

	cur = (*list);
	while (!(cur == NULL))
	{
		if (((cur->prev) && cur->n < (cur->prev)->n) && cur != NULL)
		{
			isolate_node(&cur);
			insert_node(list, &cur);
			cur = *list;
			print_list(cur);
		}
		else
			cur = cur->next;
	}
}
/**
  *isolate_node - removes the node from the doubly linked list
  *@node: pointer to the node to be isolated
  *
  *Return: void
  */
void isolate_node(listint_t **node)
{
	listint_t *prev, *nxt, *temp;

	temp = *node;
	prev = temp->prev;
	nxt = temp->next;
	prev->next = nxt;
	if (nxt != NULL)
		nxt->prev = prev;
}
/**
  *insert_node - inserts the node back into the linked list
  *@list: the head of the list
  *@node: the node to be added
  *
  *Return: 1 on success or -1 on failure
  */
int insert_node(listint_t **list, listint_t **node)
{
	listint_t *cur, *prev, *temp;

	if (list == NULL)
		return (-1);
	prev = NULL;
	cur = *list;
	temp = *node;
	while ((cur->n < temp->n) && cur != NULL)
		cur = cur->next;
	if (cur == NULL)
		return (-1);
	prev = cur->prev;
	temp->next = cur;
	cur->prev = temp;
	temp->prev = prev;
	if (prev != NULL)
		prev->next = temp;
	else
	{
		*list = temp;
		temp->prev = NULL;
	}
	return (1);
}
