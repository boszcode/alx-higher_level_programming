
Skip to content
Pull requests
Issues
Codespaces
Marketplace
Explore
@boszcode
Aysuarex /
alx-higher_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-higher_level_programming/0x01-python-if_else_loops_functions/lists.h
@Aysuarex
Aysuarex Header file with function prototypes
Latest commit 582c8f4 Oct 5, 2022
History
1 contributor
26 lines (21 sloc) 512 Bytes
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */

