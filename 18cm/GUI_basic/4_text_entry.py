from tkinter import *

root = Tk()
root.title("Halo GUI")
root.geometry("640x480") # 가로 세로

txt = Text(root, width=30, height=5)
txt.pack()

txt.insert(END, "글자를 입력하세요")

e = Entry(root, width=30)
e.pack()
e.insert(0, "한 줄만 입력해요")

root.mainloop()