#include "lists.h"

/**
 * add_node_end - add a node to the
 * @head: address of pointer to head node
 * @str: str fild of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;

if (!head || !new_node)
return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);
}
if (node)
{
while (node->next)
node = node->next;
node->next = new_node;
}
else
*head = new_node;
return (new_node);
}
