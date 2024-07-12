import tkinter as tk

def mostrar_entrada(event=None):
    edad = display.get()
    resultado = f'su edad es: {edad} anios'
    lb.config(text = resultado)

root = tk.Tk()
root.title("Calculadora")

expression = ""
display_var = tk.StringVar()

lb = tk.Label(root,text="Ingrese su edad:",font=("Times New Roman", 14))
lb.pack(pady=5,anchor='w')#colocar todos los atributos que necesite el label
# Display
display = tk.Entry(root, textvar=display_var, font="lucida 20 bold")
display.pack(fill=tk.BOTH, ipadx=8, pady=0, padx=0)

display.bind("<Return>", mostrar_entrada)


lb = tk.Label(root,text='',font=("Times New Roman", 14))
lb.pack(pady=5,anchor='w')


root.mainloop()