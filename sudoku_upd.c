/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:27:58                      #+#    #+#             */
/*   Updated: 2019/07/21 11:26:54 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		is_available(int** table, int row, int col, int num)
{
	int rowStart;
	int colStart;
	int i;

    // Walking around cluster.
    // To find suitable cluster we calculate offsets (which is divisible by 3).
    // Row / 3 is 1 only if row is 3. Then rowStart shifted to 3 / 6 cells below
	rowStart = (row / 3) * 3;
	colStart = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (table[row][i] == num)
			return (0);
		if (table[i][col] == num)
			return (0);
		if (table[rowStart + (i % 3)][colStart + (i / 3)] == num) // calculating offsets for search in cluster
			return (0);
		i++;
	}
	return (1);
}

// We start from 0 col and 0 row
int fill_cell(int** table, int row, int col)
{
	int i;
	
	i = 0;
	if (row < 9 && col < 9)
	{
		if (table[row][col] != 0) // If cell is prefilled, go ahead
		{
			if ((col + 1) < 9)
				return fill_cell(table, row, col + 1);
			else if ((row + 1) < 9)
				return fill_cell(table, row + 1, 0);
			else
				return (1);
		}
		else // If not, then...
		{
			while (i < 9) // Trying numbers
			{
				if (is_available(table, row, col, i + 1)) // If we found a suitable number
			    {
			        table[row][col] = i + 1; // Assign it to the cell
					if ((col + 1) < 9) // If next cell exist
					{
					    // Try to prefill next cell making recursive call.
					    // If operation will succseed, go ahead and return 1 to previous recursive call.
						if (fill_cell(table, row, col + 1))
							return (1);
						else
						    // Otherwise - assign 0 to the current cell
						    // Then if i is not exceeded, try to assign next suitable number and go to the next cell again.
						    // Otherwise - return 0 and go back to previous cell.
						    table[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
					    if (fill_cell(table, row + 1, 0)) // The same for rows. This will work if cells in prev line are exceeded.
					        return (1);
					    else
					        table[row][col] = 0;
					}
					else
					    return (1);
				}
			i++;
			}
		}
		return (0);
	}
	else
	    return (1);
}

void	print_table(int** table, int x, int y) //just to print array of array of ints
{
	int i;
	int j;
	char c;

	i = 0;
	while (i<x)
	{
		j = 0;
		while (j<y)
		{
			c = table[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int** alloc_array(int x, int y)
{
	int i;
	int** array;

	i = 0;
	array = (int**)malloc(x * sizeof(int *));
	while(i < x)
	{
		array[i] = (int*)malloc(y * sizeof(int));
		i++;
	}
	return (array);
}

int**	make_num_array(char **argv, int x, int y) //creates array of arrays INT, replaces '.' with '0'
{
	int i;
	int j;
	int k;
	int** num_arr;
	char* error;

	num_arr = alloc_array(x, y);
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (argv[i+1][j] >= 49 && argv[i+1][j] <= 57)
			{
				num_arr[i][j] = argv[i+1][j] - 48;
				j++;
			}
			else if (argv[i+1][j] == '.')
			{
				num_arr[i][j] = 0;
				j++;
			}
			else
			{
				error  = "Error\n";
				k = 0;
				while(error[k] !='\0')
				{
					write(1, &error[k], 1);
					k++;
				}
			_exit(1);
			}
		}
		i++;
	}
	return (num_arr);
}

int		main(int argc, char **argv)
{
	int** arr;
	int i;
	char* error;

	i = 0;
	if(argc == 10)
	{
		arr = make_num_array(argv, 9, 9);
		fill_cell(arr, 0, 0);
		print_table(arr, 9, 9);
	}
	else
	{
		error = "Error\n";
		while(error[i] != '\0')
		{
			write(1, &error[i], 1);
			i++;
		}
	}
	return (0);
}
