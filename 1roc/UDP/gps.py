import tkinter
import random
canvas = tkinter.Canvas()
canvas.pack()

def gps():
    x = random.randint(10,300)
    y = random.randint(10,100)
    canvas.create_text(x, y, text="+")
    #canvas.create_text(x, y-5, text=x,", ", y)
    canvas.create_text(x-10, y+10, text=x)
    canvas.create_text(x+10, y+10, text=y)
for i in range(1000):
    gps()
