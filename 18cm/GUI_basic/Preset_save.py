import os
from tkinter import *


root = Tk()
root.title("URL HTML Preset")
root.geometry("640x480")

# 열기, 저장 파일 이름
filename = "myno te.txt"

def save_file():
    with open(filename, "w", encoding="utf8") as file:
        file.write(txt1.get("1.0", END)) # 모든 내용을 가져와서 저장

# 상단 메뉴 바
menu = Menu(root)
 

# 파일 탭 (상단 메뉴 바)
menu_file = Menu(menu, tearoff=0)

menu_file.add_command(label="저장", command=save_file)
menu_file.add_separator()
menu_file.add_command(label="끝내기", command=root.quit)
menu.add_cascade(label="파일", menu=menu_file)

# ㅍ편집, 서식, 보기, 도움말
menu_edit = Menu(menu, tearoff=0)
menu.add_cascade(label="편집", menu=menu_edit)
menu_ser = Menu(menu, tearoff=0)
menu.add_cascade(label="서식", menu=menu_ser)
menu_see = Menu(menu, tearoff=0)
menu.add_cascade(label="보기", menu=menu_see)
menu_help = Menu(menu, tearoff=0)
menu.add_cascade(label="도움말", menu=menu_help)

# 스크롤바
scrollbar = Scrollbar(root)
scrollbar.pack(side="right", fill="y")

# 텍스트 입력 창
txt1 = Text(root, yscrollcommand=scrollbar.set)
txt1.pack(side="left", fill="both", expand=True)

scrollbar.config(command=txt1.yview)
root.config(menu=menu)
root.mainloop()

 



