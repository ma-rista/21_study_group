import os
from tkinter import *
from functools import partial
from bs4 import BeautifulSoup
import urllib.request as req

root = Tk()
root.title("웹스크래퍼")
root.geometry("640x480")

lab1 = Label(root)
def btncmd():
    lab1.config(text="입력한 url 입니다.\n"+ent1.get())
    url = ent1.get()
    res = req.urlopen(url)
    soup = BeautifulSoup(res, "html.parser")
    a_list = soup.select("#mw-content-text > div > ul >  li > a")
    for a in a_list:
        name = a.string
        txt.insert(END," - "+name+"\n")
        
# url 입력 창
txt = Text(root,   )
txt.pack(side="bottom", fill="both", expand=True)

# 스크랩 버튼
btn1 = Button(root, text="스크랩", command=btncmd)
btn1.pack()

# url 텍스트 엔트리
ent1 = Entry(root)
ent1.bind("<Return>", btn1)
ent1.pack()
lab1.pack()        

def btncmd():
    a_list = soup.select(ent2.get())

# 파트 입력 창
txt2 = Text(root,   )
txt2.pack(side="bottom", fill="both", expand=True)

# select 버튼
btn_2 = Button(root, text="select", command=btncmd)
btn_2.pack()

# 파트 텍스트 엔트리
ent2 = Entry(root)
ent2.bind("<Return>", btn_2)
ent2.pack()




scrollbar = Scrollbar(txt)
scrollbar.pack(side="right", fill="y")
scrollbar.config(command=txt.yview)



root.mainloop()  
