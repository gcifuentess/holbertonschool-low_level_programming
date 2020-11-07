#!/usr/bin/python3
'''Island Permimeter Module'''


def island_perimeter(grid):
    '''Calculates the perimieter of an island in grid if any'''
    len_row = len(grid)
    len_col = len(grid[0])
    perimeter = 0
    i = 0
    while i < len_row:
        j = 0
        while j < len_col:
            if i != 0 and i < (len_row - 1):  # checks up and down borders
                if j != 0 and j < len_col - 1:  # checks left and right borders
                    cell = grid[i][j]
                    if cell == 1:
                        if grid[i - 1][j] == 0:  # checks upside
                            perimeter += 1
                        if grid[i + 1][j] == 0:  # checks downside
                            perimeter += 1
                        if grid[i][j - 1] == 0:  # checks leftside
                            perimeter += 1
                        if grid[i][j + 1] == 0:  # checks rigthside
                            perimeter += 1
            j += 1
        i += 1
    return perimeter
