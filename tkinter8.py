from tkinter import *
w=Tk()
w.title("radio")
Label(w,text="Choose please ! ").grid(row=0,sticky=W)
rad1=Radiobutton(w,text="C",value=1)
rad2=Radiobutton(w,text="Java",value=2)
rad3=Radiobutton(w,text="Python",value=3)
rad1.grid(row=1,sticky=W)
rad2.grid(row=2,sticky=W)
rad3.grid(row=3,sticky=W)
w.mainloop()
