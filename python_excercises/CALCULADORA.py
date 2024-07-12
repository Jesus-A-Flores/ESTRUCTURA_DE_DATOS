import tkinter as tk

def click(event):
    global expression
    text = event.widget.cget("text")
    if text == "=":
        try:
            result = str(eval(expression))
            display_var.set(result)
            expression = result
        except Exception as e:
            display_var.set("Error")
            expression = ""
    elif text == "C":
        expression = ""
        display_var.set(expression)
    else:
        expression += text
        display_var.set(expression)

root = tk.Tk()
root.title("Calculadora")

expression = ""
display_var = tk.StringVar()

# Display
display = tk.Entry(root, textvar=display_var, font="lucida 20 bold")
display.pack(fill=tk.BOTH, ipadx=8, pady=10, padx=10)

# Button Frame
button_frame = tk.Frame(root)
button_frame.pack()

buttons = [
    "7", "8", "9", "/", 
    "4", "5", "6", "*", 
    "1", "2", "3", "-", 
    "C", "0", "=", "+"
]

row = 0
col = 0

for button in buttons:
    btn = tk.Button(button_frame, text=button, font="lucida 15 bold", relief=tk.RAISED, border=1)
    btn.grid(row=row, column=col, ipadx=20, ipady=20)
    btn.bind("<Button-1>", click)
    col += 1
    if col == 4:
        col = 0
        row += 1

root.mainloop()
