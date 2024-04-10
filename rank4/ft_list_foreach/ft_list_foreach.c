/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:55:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/22 13:02:30 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;
*/
//#include <stdio.h>
#include "ft_list.h"

/*void print_int(void *data)
{
    int *ptr = (int *)data;
    printf("%d ", *ptr);
}*/

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

/*#include <stdlib.h>
#include <stddef.h>

int main()
{
    // Criando alguns nós para a lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    // Dados para os nós
    int data1 = 10;
    int data2 = 20;
    int data3 = 30;

    // Configurando os dados e as conexões
    node1->data = &data1;
    node1->next = node2;

    node2->data = &data2;
    node2->next = node3;

    node3->data = &data3;
    node3->next = NULL;

    // Chama a função ft_list_foreach para imprimir os dados de cada nó
    printf("Lista original: ");
    ft_list_foreach(node1, &print_int);
    printf("\n");

    // Libera a memória alocada para os nós
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
