from tkinter import *


root = Tk()
root.title("뭬모쥉")
root.geometry("640x480")


frame = Frame(root)
frame.pack()


# 스크롤
scrollbar = Scrollbar()
scrollbar.pack(side="right", fill="y")

# 텍스트 입력 창
txt = Text(root, width=640, height=480, yscrollcommand=scrollbar.set)
txt.pack(side="left")


# 상단 메뉴 바
menu = Menu(root)

# 파일 탭 (상단 메뉴 바)
menu_file = Menu(menu, tearoff=0)
menu.add_cascade(label="파일", menu=menu_file)
menu_file.add_separator()
menu_file.add_command(label="열기")
menu_file.add_command(label="저장")
menu_file.add_command(label="끝내기", command=root.quit)


# 편집 탭 (상단 메뉴 바)
menu_edit = Menu(menu, tearoff=0)
menu.add_cascade(label="편집", menu=menu_edit)

# 서식 탭 (상단 메뉴바)
menu_ser = Menu(menu, tearoff=0)
menu.add_cascade(label="서식", menu=menu_ser)

scrollbar.config(command=txt.yview)
root.config(menu=menu)
root.mainloop()





