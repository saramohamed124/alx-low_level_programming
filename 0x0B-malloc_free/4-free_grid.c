#include "main.h"
#include <stdlib.h>
/**
 * free_grid- prints buffer in hexa
 * @grid: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
free(grid[k]);

free(grid);
}
