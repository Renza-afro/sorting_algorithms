#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/*Comparison direction macros for bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - Enumeration of boolean values*/

/**
* enum bool->............
* @false: ...
* @true: ...
*/
typedef enum bool
{
false = 0,
true
} bool;


/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/*Helper for swapping*/
void swap_ints(int *a, int *b);

/*Printing  functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*Regular functions prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);
int get_max(int *array, int size);
void counting_sort(int *array, size_t size);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
