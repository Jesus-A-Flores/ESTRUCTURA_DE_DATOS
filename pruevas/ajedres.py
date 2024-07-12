import pygame
import sys

# Inicializar Pygame
pygame.init()

# Definir el tamaño del panel
width = 800
height = 800
panel_size = (width, height)

# Crear la ventana del panel
panel = pygame.display.set_mode(panel_size)
pygame.display.set_caption("Panel de control")

# Color de fondo
background_color = (255, 255, 255)

# Color del cuadro
color_blue = (0, 0, 255)
color_red = (255, 0, 0)
color_blan = (255,255,255)
color_black = (0,0,0)
# Tamaño y posición del cuadro
rect_width = 100
rect_height = 100
rect_x = 0
rect_y = 0
cuadro_mat = [0,1,0,1,0,1,0,1]
ajedrez_cuadro = [[0,1,0,1,0,1,0,1],
                  [1,0,1,0,1,0,1,0],
                  [0,1,0,1,0,1,0,1],
                  [1,0,1,0,1,0,1,0],
                  [0,1,0,1,0,1,0,1],
                  [1,0,1,0,1,0,1,0],
                  [0,1,0,1,0,1,0,1],
                  [1,0,1,0,1,0,1,0]]
# Bucle principal del programa
while True:
    # Manejo de eventos
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Dibujar el fondo
    panel.fill(background_color)

    # Dibujar el cuadro de ajedrez
    increment_x = 0
    increment_y = 0
    for i in range(8):
        for j in range(8):
            if ajedrez_cuadro[i][j] == 1:
                pygame.draw.rect(panel, color_blan, (rect_x+increment_x, rect_y+increment_y, rect_width, rect_height))
            else:
                pygame.draw.rect(panel, color_black, (rect_x+increment_x, rect_y+increment_y, rect_width, rect_height))
            increment_x+=100
        increment_y+=100
        increment_x = 0
    # Actualizar la pantalla
    pygame.display.flip()