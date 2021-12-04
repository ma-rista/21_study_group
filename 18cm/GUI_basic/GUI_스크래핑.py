import os
from tkinter import *
from functools import partial
from bs4 import BeautifulSoup
import urllib.request as req


root = Tk()
root.title("웹스크래퍼")
root.geometry("220x480")

# URL 레이블 (1)
lab2 = Label(root,text="URL")
lab2.grid(row=0, column=5)

# HTML 레이블 (2)
lab3 = Label(root,text="출력할 범위 (HTML 입력)")
lab3.grid(row=2, column=5)

lab1 = Label(root)


## 버튼 및 버튼 평션 ##

# 프리셋 저장
    
def save():
    import Preset_save as P
    U = ent1.get()
    H = ent2.get()
    P.txt1.insert(END)         

def btncmd():
    url = ent1.get()
    res = req.urlopen(url)  
    soup = BeautifulSoup(res, "html.parser")
    a_list = soup.select(ent2.get())
    for a in a_list:
        name = a.string
        txt.insert(END," - "+name+"\n")
        

# 스크랩 버튼
btn1 = Button(root, text="스크랩", command=btncmd, width=3, height=1)
btn1.grid(row=4,column=6)

btn2 = Button(root, text="저장", command=save, width=3, height=1)
btn2.grid(row=4,column=5)

## 버튼 및 버튼 펑션 ##

# url 텍스트 엔트리
ent1 = Entry(root)
ent1.bind("<Return>", btn1)
ent1.grid(row=1, column=5)   

# 파트 텍스트 엔트리
ent2 = Entry(root)
ent2.bind("<Return>", btn1)
ent2.grid(row=3, column=5)

# 스크래핑 결과 
txt = Text(root, width=27, height=10)
txt.grid(row=7, column=5)

# 메뉴 바 #
menu = Menu(root)

menu_file = Menu(menu, tearoff=0)
menu_file.add_separator()
menu_file.add_command(label="끝내기", command=root.quit)
menu.add_cascade(label="파일", menu=menu_file)





# scrollbar = Scrollbar(txt)
# scrollbar.pack()
# scrollbar.config(command=txt.yview)

root.config(menu=menu)
root.mainloop()  
