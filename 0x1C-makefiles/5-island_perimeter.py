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
    col = 0
    perim = 0
    add_2 = True
    """horizontal"""
    for row in grid:
        col = 0
        add_2 = True
        while col < len(row):
            b = col
            if row[b] == 1 and (b == 0 or b == len(row) - 1):
                """edge cases"""
                perim += 1
            elif row[b] == 1:
                while row[b] == 1:
                    b += 1
                if add_2 == True:
                    perim += 2
                    add_2 = False
                else:
                    perim += 1
            if b > col:
                col = b
            else:
                col += 1
    col = 0
    row = 0
    for col in range(0, len(grid[row])):
        row = 0
        add_2 = True
        while row < len(grid):
            b = row
            if grid[row][col] == 1 and (b == 0 or b == len(grid) - 1):
                perim += 0
            elif grid[row][col] == 1:
                while grid[b][col] == 1:
                    b += 1
                if add_2 == True:
                    perim += 2
                    add_2 = False
                else:
                    perim += 1
            if b > row:
                row = b
            else:
                row += 1
    return perim
