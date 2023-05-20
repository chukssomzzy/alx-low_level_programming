#!/usr/bin/python3

"""Module that return perimeter of an island"""


def island_perimeter(grid):
    """Returns perimeter of an island"""
    ones = 0
    edges = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                ones += 1
                if i > 0 and grid[i - 1][j]:
                    edges += 1
                if j > 0 and grid[i][j - 1]:
                    edges += 1
    return (ones * 4) - (edges * 2)
