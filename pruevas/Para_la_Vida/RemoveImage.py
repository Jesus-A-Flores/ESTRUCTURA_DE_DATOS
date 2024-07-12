#remover fondo de imagen 
from rembg import remove
from PIL import Image

#input_path = 'laimagen en *.jpg'
input_path = 'C:\\Users\\LENOVO\\Desktop\\CODIGOS\\pruevas\\Para_la_Vida\\INFORMATICA.jpg'
output_path = 'C:\\Users\\LENOVO\\Desktop\\CODIGOS\\pruevas\\Para_la_Vida\\LOGO_inf.png'
input = Image.open(input_path)
output = remove(input)
output.save(output_path)