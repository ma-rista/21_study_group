from tkinter import *

windo = Tk() # GUI 창 생성
windo.title("test") # GUI 창 제목 설정



scrollbar = Scrollbar(windo) # 스크롤바 생성
scrollbar.pack(side="right", fill="y") # 스크롤바 창 안에 채우기

txt = Text(windo, yscrollcommand=scrollbar.set) # text 입력 박스 생성
txt.pack(side="left", expand=True) # 텍스트 입력 박스 창 안에 채우기



scrollbar.config(command=txt.yview)
windo.mainloop()