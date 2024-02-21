#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists of integers representing the island.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0

    # Iterate through the rows of the grid
    for i in range(len(grid)):
        # Iterate through the columns of the grid
        for j in range(len(grid[0])):
            # Check if the cell is part of the island
            if grid[i][j] == 1:
                perimeter += 4  # Start with the assumption that all sides are land

                # Check adjacent cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for each shared side
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
