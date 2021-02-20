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
           #  print(grid[row][col], end=' ')
            """outside row border"""
            if grid[row][col] == 1:
                if row - 1 < 0:
                    """Up"""
                    perim += 1
                if row + 1 > len(grid) - 1:
                    """Down"""
                    perim += 1
                if col - 1 < 0:
                    """Left"""
                    perim += 1
                if col  + 1 > len(grid[row]) - 1:
                    """Right"""
                    perim += 1

                if row >= 0 and grid[row - 1][col] == 0:
                    perim += 1
                    # up = 9
                    # grid[row - 1][col] = 9
                if row < len(grid) and grid[row + 1][col] == 0:
                    perim += 1
                    # down = 9
                    # grid[row + 1][col] = 9
                if col >= 0 and grid[row][col - 1] == 0:
                    perim += 1
                    # left
                    # grid[row][col - 1] = 9
                if col < len(grid) and grid[row][col + 1] == 0:
                    perim += 1
                    # right
                    # grid[row][col + 1] = 9
        # print("Perim: {}".format(perim))
#    for row in range(0, len(grid)):
#        for col in range(0, len(grid[row])):
#             print(grid[row][col], end=' ')
#        print()
    return perim
