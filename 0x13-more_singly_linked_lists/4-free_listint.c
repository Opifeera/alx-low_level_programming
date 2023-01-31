#include "lists.h"

/**
 * free_listint - Frees listint_t list
 *
 * @head: pointer to the head of the listint_t list to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
