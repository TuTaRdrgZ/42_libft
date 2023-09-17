/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:03:00 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/17 20:26:40 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*					FT_CALLOC:
	Asigna memoria para un número especificado de elementos
	de un tamaño dado, y la inicializa a cero.
	Es útil para asignar y preparar memoria para estructuras
	de datos, como arreglos.
*/
void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*result;

	result = malloc(num_elements * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, num_elements * size);
		return (result);
	}
}
/*
#include <stdio.h>
int main()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *arr;

    // Llama a ft_calloc para asignar memoria para un arreglo de 5 enteros
    arr = (int *)ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("La asignación de memoria ha fallado.\n");
        return 1;
    }

    // Rellena el arreglo con algunos valores
    for (size_t i = 0; i < num_elements; i++) {
        arr[i] = i * 2;
    }

    // Imprime los valores del arreglo
    printf("Elementos del arreglo:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Libera la memoria asignada
    free(arr);

    return 0;
}*/
