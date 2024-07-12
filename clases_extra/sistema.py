import pygame
import random

# Dimensiones de la pantalla
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
BLOCK_SIZE = 30
GRID_WIDTH = SCREEN_WIDTH // BLOCK_SIZE
GRID_HEIGHT = SCREEN_HEIGHT // BLOCK_SIZE

# Colores
WHITE = (255, 255, 255)
GRAY = (128, 128, 128)
BLACK = (0, 0, 0)
CYAN = (0, 255, 255)
BLUE = (0, 0, 255)
ORANGE = (255, 165, 0)
YELLOW = (255, 255, 0)
GREEN = (0, 255, 0)
PURPLE = (128, 0, 128)

# Definición de las piezas tetrimino
tetriminos = [
    [[1, 1, 1, 1]],                        # I
    [[1, 1, 0], [0, 1, 1]],                # Z
    [[0, 1, 1], [1, 1, 0]],                # S
    [[1, 1, 1], [0, 1, 0]],                # T
    [[1, 1, 1], [1, 0, 0]],                # L
    [[1, 1, 1], [0, 0, 1]],                # J
    [[1, 1], [1, 1]]                       # O
]

class Tetris:
    def __init__(self):
        pygame.init()
        self.screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
        pygame.display.set_caption("Tetris")
        self.clock = pygame.time.Clock()
        self.grid = [[0] * GRID_WIDTH for _ in range(GRID_HEIGHT)]
        self.current_piece = self.new_piece()

    def new_piece(self):
        shape = random.choice(tetriminos)
        piece = {
            'shape': shape,
            'rotation': 0,
            'x': GRID_WIDTH // 2 - len(shape[0]) // 2,
            'y': 0
        }
        return piece

    def draw_grid(self):
        for y in range(GRID_HEIGHT):
            for x in range(GRID_WIDTH):
                if self.grid[y][x] != 0:
                    color = self.grid[y][x]
                    pygame.draw.rect(self.screen, color, pygame.Rect(x * BLOCK_SIZE, y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))
                else:
                    pygame.draw.rect(self.screen, GRAY, pygame.Rect(x * BLOCK_SIZE, y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE), 1)

    def draw_piece(self):
        piece = self.current_piece
        shape = piece['shape'][piece['rotation']]
        color = random.choice([CYAN, BLUE, ORANGE, YELLOW, GREEN, PURPLE])
        for y in range(len(shape)):
            for x in range(len(shape[0])):
                if shape[y][x]:
                    pygame.draw.rect(self.screen, color, pygame.Rect((piece['x'] + x) * BLOCK_SIZE, (piece['y'] + y) * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))

    def move_piece(self, dx, dy):
        if self.is_valid_move(dx, dy):
            self.current_piece['x'] += dx
            self.current_piece['y'] += dy
        else:
            if dy != 0:
                self.lock_piece()

    def rotate_piece(self):
        self.current_piece['rotation'] = (self.current_piece['rotation'] + 1) % len(self.current_piece['shape'][0])
        if not self.is_valid_move(0, 0):
            self.current_piece['rotation'] = (self.current_piece['rotation'] - 1) % len(self.current_piece['shape'][0])

    def is_valid_move(self, dx, dy):
        piece = self.current_piece
        shape = piece['shape'][piece['rotation']]
        for y in range(len(shape)):
            for x in range(len(shape[0])):
                if shape[y][x]:
                    nx = piece['x'] + x + dx
                    ny = piece['y'] + y + dy
                    if nx < 0 or nx >= GRID_WIDTH or ny >= GRID_HEIGHT or (ny >= 0 and self.grid[ny][nx]):
                        return False
        return True

    def lock_piece(self):
        piece = self.current_piece
        shape = piece['shape'][piece['rotation']]
        for y in range(len(shape)):
            for x in range(len(shape[0])):
                if shape[y][x]:
                    self.grid[piece['y'] + y][piece['x'] + x] = random.choice([CYAN, BLUE, ORANGE, YELLOW, GREEN, PURPLE])
        self.current_piece = self.new_piece()

    def clear_lines(self):
        lines_to_clear = [i for i, row in enumerate(self.grid) if all(row)]
        for index in lines_to_clear:
            del self.grid[index]
            self.grid.insert(0, [0] * GRID_WIDTH)

    def run(self):
        while True:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    return
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_LEFT:
                        self.move_piece(-1, 0)
                    elif event.key == pygame.K_RIGHT:
                        self.move_piece(1, 0)
                    elif event.key == pygame.K_DOWN:
                        self.move_piece(0, 1)
                    elif event.key == pygame.K_UP:
                        self.rotate_piece()

            self.screen.fill(BLACK)
            self.move_piece(0, 1)
            self.clear_lines()
            self.draw_grid()
            self.draw_piece()
            pygame.display.flip()
            self.clock.tick(5)

if __name__ == "__main__":
    game = Tetris()
    game.run()
