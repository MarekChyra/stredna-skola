from tkinter import *
import random
canvas = Canvas()
canvas.pack()


def stitok(
    x = random.randint(50,300)
    y = random.randint(50,200)
    canvas.create_rectangle(x-20,x-10,x+20,y+10,fill="white")
    canvas.create_text(x,y,text="Marek")
)
stitok()
stitok()
stitok()
stitok()
