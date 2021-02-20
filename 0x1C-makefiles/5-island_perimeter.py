#!/usr/bin/python3
"""Google Interview Question"""


def island_perimeter(grid):
    """asdf"""
    # island"""
    # A = init start, B = scout"""
    # AB        """
    # 0 1 1 0 0"""
    # 0 1 0 1 0"""
    if grid is None:
        return 0
    perim = 0
    for row in range(0, len(grid)):
        for col in range(0, len(grid[row])):
            print(grid[row][col], end=' ')
            """outside row border"""
            if grid[row][col] == 1:
                if row < 0:
                    perim += 1
                else:
                    up = grid[row - 1][col]
                if row + 1 >= len(grid):
                    perim += 1
                else:
                    down = grid[row + 1][col]
                if col < 0:
                    perim += 1
                else:
                    left = grid[row][col - 1]
                if col + 1 >= len(grid[row]):
                    perim += 1
                else:
                    right = grid[row][col + 1]

                if row >= 0 and up == 0:
                    perim += 1
                    up = 9
                if row < len(grid) and down == 0:
                    perim += 1
                    down = 9
                if col >= 0 and left == 0:
                    perim += 1
                    left = 9
                if col < len(grid[row]) and right == 0:
                    perim += 1
                    right = 9
        print()
    return perim
