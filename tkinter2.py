def clicked():
    label1.configure(text="Button clicked")

import tkinter
w=tkinter.Tk()
w.title("Tk2")
w.geometry("350x200")
label1=tkinter.Label(w,text="hi")
label1.grid(row=0,column=0)
button1=tkinter.Button(w,text="Enter",fg="Black",bg="Grey",command=clicked)
button1.grid(row=0,column=1)
w.mainloop()


