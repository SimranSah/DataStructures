from tkinter import *
w=Tk()
var1=IntVar()
Checkbutton(w,text="Male",var=var1).grid(row=0,sticky=W)
var2=IntVar()
Checkbutton(w,text="Female",var=var2).grid(row=1,sticky=W)
w.mainloop()
