
#!/usr/bin/python3
"""
island pariemeter functon with grid
"""


def island_perimeter(grid):
    """
    island function
    """
    x = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                x += 4
                if (grid[i + 1][j] == 1) and (i < len(grid) - 1):
                    x -= 1
                if (grid[i - 1][j] == 1) and (i > 0):
                    x -= 1
                if (grid[i][j + 1] == 1) and (j < len(grid[i]) - 1):
                    x -= 1
                if (grid[i][j - 1] == 1) and (j > 0):
                    x -= 1
    return(x)
