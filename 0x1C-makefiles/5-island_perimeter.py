#!/usr/bin/python3

"""Module that return perimeter of an island"""


def island_perimeter(grid):
    """Returns perimeter of an island"""
    len = 0
    for arr in grid:
        for val in arr:
            if val:
                len += val
    return 2 * (len  + 1)
