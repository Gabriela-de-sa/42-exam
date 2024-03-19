/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:09 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/19 11:49:09 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;

*/

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}

/*#include <stdio.h>
#include <unistd.h>

int main() {
    // Criando alguns nós da lista
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    // Inicializando os dados dos nós
    node1->data = "Primeiro";
    node1->next = node2;

    node2->data = "Segundo";
    node2->next = node3;

    node3->data = "Terceiro";
    node3->next = NULL;

    // Chamando a função ft_list_size() e imprimindo o resultado
    printf("O tamanho da lista é: %d\n", ft_list_size(node1));

    // Liberando a memória alocada para os nós
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
