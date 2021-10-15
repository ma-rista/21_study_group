import tkinter.messagebox as msgbox
from tkinter import *

root = Tk()
root.title("woojin GUI")
root.geometry("640x480")

def info():
    msgbox.showinfo("알림", "정상적으로 예매 완료되었습니다.")

def warn():
    msgbox.showwarning("경고", "해당 좌석은 매진되었다구~")

def error():
    msgbox.showerror("경고", "결제오류가 발생했습니다.")

def okaycancel():
    msgbox.askokcancel("확인 / 취소", "그기 유아동반석인디. 예매할겨?")

def retrycancel():
    msgbox.askretrycancel("재시도 / 취소", "일시적인 오류가 발생했습니다. 다시 시도하겠습니다?")

def yesno():
    msgbox.askyesno("예 / 아니오", "해당 좌석은 역방향입니다. 예매하시겠습니까?")

def yesnocancel():
    response = msgbox.askyesnocancel(title=None, message="예매 내역이 저장되지 않았습니다. \n 저장후 프로그램을 종료하시겠습니까?")
    # 네 : 저장 후 종료
    # 아니오 : 저장 하지 않고 종료
    # 취소 : 프로그램 종료 취소 (현재 화면에서 계속 작업)
    print("응답:", response) # True, False, None
    if response == 1:
        print("예")
    elif response == 0: 
        print("아니오")
    else:
        print("취소")
Button(root, command=info, text="알림").pack()
Button(root, command=warn, text="경고").pack()
Button(root, command=error, text="에러").pack()

Button(root, command=okaycancel, text="확인 취소").pack()
Button(root, command=retrycancel, text="재시도 취소").pack()
Button(root, command=yesno, text="예 아니오").pack()
Button(root, command=yesnocancel, text="예 아니오 취소").pack()

root.mainloop()