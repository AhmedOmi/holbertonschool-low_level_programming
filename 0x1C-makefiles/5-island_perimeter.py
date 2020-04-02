#!/usr/bin/python3
"""
island pariemeter functon with grid
"""


def island_perimeter(grid):
    """
    island perimeter
    """

    x = 0
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    x += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    x += 1
                if j == 0 or grid[i][j - 1] == 0:
                    x += 1
                if j == len(row) - 1 or grid[i][j + 1] == 0:
                    x += 1
    return x
