#!/usr/bin/python3
""" Island Perimeter problem """

def island_perimeter(grid):
    """ Returns the perimeter of the island within the grid """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    if not grid:
        return (0)

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if grid[r][c-1] == 0:
                    perimeter += 1
                if grid[r][c+1] == 0:
                    perimeter += 1
                if grid[r-1][c] == 0:
                    perimeter += 1
                if grid[r+1][c] == 0:
                    perimeter += 1
    return (perimeter)
