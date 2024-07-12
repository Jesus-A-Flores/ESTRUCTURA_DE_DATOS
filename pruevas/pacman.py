import pygame
import sys

# Inicializar Pygame
pygame.init()

# Definir el tamaño del panel
width = 800
height = 600
panel_size = (width, height)

# Crear la ventana del panel
panel = pygame.display.set_mode(panel_size)
pygame.display.set_caption("Pac-Man")

# Color de fondo
background_color = (0, 0, 0)

# Color de Pac-Man
pacman_color = (255, 255, 0)

# Posición y tamaño de Pac-Man
pacman_radius = 30
pacman_x = width // 2
pacman_y = height // 2

# Dirección de movimiento inicial
movement_x = 0
movement_y = 0

# Velocidad de movimiento de Pac-Man
speed = 5

# Bucle principal del juego
while True:
    # Manejo de eventos
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                movement_x = -speed
                movement_y = 0
            elif event.key == pygame.K_RIGHT:
                movement_x = speed
                movement_y = 0
            elif event.key == pygame.K_UP:
                movement_x = 0
                movement_y = -speed
            elif event.key == pygame.K_DOWN:
                movement_x = 0
                movement_y = speed

    # Actualizar la posición de Pac-Man
    pacman_x += movement_x
    pacman_y += movement_y

    # Dibujar el fondo
    panel.fill(background_color)

    # Dibujar Pac-Man
    pygame.draw.circle(panel, pacman_color, (pacman_x, pacman_y), pacman_radius)

    # Limitar la velocidad de actualización
    pygame.time.Clock().tick(30)

    # Actualizar la pantalla
    pygame.display.flip()
