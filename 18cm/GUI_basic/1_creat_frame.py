from tkinter import *

root = Tk()
root.title("Halo GUI")
root.geometry("640x480") # 가로 세로
# root.geometry("640x480+300+100") # 가로 세로 x 좌표 y 좌표

root.resizable(False, False) # x너비 y높이 변경 불가 (창 크기 변경 불가)
root.mainloop()