from tkinter import *
canvas = Canvas()
canvas.pack()
x1=100
y1=100
x2=200
y2=200
canvas.create_rectangle(x1,y1,x2,y2)
canvas.create_text(x1-5,y1-5,text="A")
canvas.create_text(x2+5,y1-5,text="B")
canvas.create_text(x2+5,y2+5,text="C")
canvas.create_text(x1-5,y2+5,text="D")
