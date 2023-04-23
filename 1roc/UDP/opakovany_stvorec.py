import tkinter
import random
canvas = tkinter.Canvas()
canvas.pack()

def cerveny_stvorec():
    canvas.create_rectangle(10,10,210,110, fill="red")
for i in range(100):
    cerveny_stvorec()
