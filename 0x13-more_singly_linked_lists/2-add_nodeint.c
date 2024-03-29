#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 *               of a listint_t list
 *
 * @head: pointer to address of head of the listint_t list
 * @n: integer for new node
 *
 * Return: according to condition
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
