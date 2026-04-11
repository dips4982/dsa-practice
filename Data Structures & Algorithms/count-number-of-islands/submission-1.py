class Solution:
    def __init__(self):
        self.visited: set[tuple[int, int]] = set()

    def dfs(self, grid: List[List[str]], x, y, rows, cols):
        if (x < 0 or x >= rows or y < 0 or y >= cols or grid[x][y] == '0' or (x, y) in self.visited):
            return
        self.visited.add((x, y))
        self.dfs(grid, x + 1, y, rows, cols)
        self.dfs(grid, x - 1, y, rows, cols)
        self.dfs(grid, x, y + 1, rows, cols)
        self.dfs(grid, x, y - 1, rows, cols)

    def numIslands(self, grid: List[List[str]]) -> int:
        self.visited = set()
        islands = 0
        rows = len(grid)
        cols = len(grid[0])
        for row in range(rows):
            for col in range(cols):
                if grid[row][col] == '1' and (row, col) not in self.visited:
                    islands = islands + 1
                    self.dfs(grid, row, col, rows, cols)

        return islands