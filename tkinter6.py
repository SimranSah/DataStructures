from tkinter import *
w=Tk()
w.title("Tk")
label1=Label(w,text="First Name",font=("Ariel",18)).grid(row=0,column=0)
label2=Label(w,text="Last Name",font=("Ariel",18)).grid(row=1,column=0)
e1=Entry(w,width=20)
e2=Entry(w,width=20)
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
