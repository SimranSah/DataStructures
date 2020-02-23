
def aashi():
    label1.configure(topframe,text="faaaaaaak offf...!!")

def simran():
    label1.configure(topframe,text="cutie !!")
from tkinter import *

w=Tk()

label1=Label(w,text="AUKAT ANUSAR ",font=("Ariel",20)).pack()
             
topframe=Frame(w).pack()
bottomframe=Frame(w).pack(side="bottom")
             
Button(topframe,text="aashi",fg="green",command=aashi).pack()
Button(topframe,text="Simran",fg="blue",command=simran).pack()

Button(bottomframe,text="1",fg="red").pack(side="left")
Button(bottomframe,text="2",fg="red").pack(side="left")

w.mainloop()
