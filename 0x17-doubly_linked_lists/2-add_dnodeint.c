#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint - a function that adds a new node
  * @head: An input character
  * @n: An input character
  * Return: a linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n){
    head = malloc(sizeof(dlistint_t));
    newnode = malloc(sizeof(dlistint_t));
    newnode->n = n;
    head->prev = newnode;
    newnode->next = head;
    newnode->prev = NULL;
    head = newnode;
}	

