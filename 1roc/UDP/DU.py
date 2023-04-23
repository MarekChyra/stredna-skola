import tkinter
import random

canvas = tkinter.Canvas()
canvas.pack()

def cerveny_stvorec():
    x = random.randint(1, 350)
    y = random.randint(1, 250)
    canvas.create_rectangle(x, y, x + 10, y + 10, fill='red')

def modry_stvorec():
    x = random.randint(1, 350)
    y = random.randint(1, 250)
    canvas.create_rectangle(x, y, x + 10, y + 10, fill='blue')

for i in range(2000):
    cerveny_stvorec()
    modry_stvorec()
