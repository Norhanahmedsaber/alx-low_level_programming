#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: The head pointer
 * Return: no return
 */

void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
