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
    rcount = 0
    scout = 0
    searching = False
    for row in range(0, len(grid)):
        col = 0
        add_2 = True
        searching = False
        while col < len(grid[row]):
            scout = col
            if grid[row][scout] == 1:
                searching = True
                while(grid[row][scout] == 1 and scout < len(grid[row]) - 1):
                    scout += 1
                searching = False
                if add_2 == True:
                    perim += 2
                    add_2 = False
                else:
                    perim += 1
            if scout > col:
                col = scout
            else:
                col += 1
        if searching:
            if add_2:
                perim += 2
            else:
                perim += 1
        print()
    col = 0
    perim = 0
    add_2 = True
    rcount = 0
    scout = 0
    searching = False
    for col in range(0, len(grid[0])):
        row = 0
        add_2 = True
        searching = False
        while row < len(grid):
            scout = row
            print(grid[row][col], end=' ')
            if grid[scout][col] == 1:
                searching = True
                while(grid[scout][col] == 1 and scout < len(grid) - 1):
                    scout += 1
                searching = False
                if add_2 == True:
                    perim += 2
                    add_2 = False
                else:
                    perim += 1
            if scout > row:
                row = scout
            else:
                row += 1
            print(perim, end=' ')
        if searching:
            if add_2:
                perim += 2
            else:
                perim += 1
        print()
