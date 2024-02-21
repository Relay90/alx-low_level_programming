#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Assume all sides are land

                # Check left and up neighbors
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for shared side
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
