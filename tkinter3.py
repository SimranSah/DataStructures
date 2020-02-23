def clicked():
    Result="Hi "+input1.get()
    button1.configure(text=Result)

import tkinter
w=tkinter.Tk()
input1=tkinter.Entry(w,width=10)
input1.grid(row=0,column=1)
button1=tkinter.Button(w,text="Name",command=clicked)
button1.grid(row=0,column=0)
w.mainloop()

