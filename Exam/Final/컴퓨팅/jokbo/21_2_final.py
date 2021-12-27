
#* 21년 2학기 기말고사
#* 1.다음 용어에 대해 설명하시오
#* (1) 딕셔너리와 세트
#* (2) 람다함수와 재귀함수
#* (3) 모듈과 패키지

#* 2. 다음 물음에 답하시오
#* (1) 다음 프로그램 결과를 작성하시오
# aa = []
# hap = 0
# for i in range(1,5):
#     aa.append(i)
#     hap = hap + aa[i-1]
# print("첫번째 결과 : %d" % hap)
# myList = [5, 15, 3, 20]
# myList.append(10)
# myList.append(50)
# print("첫번째 결과 : %s" % myList)
# myList.sort()
# print("두번째 결과 : %s" % myList)
# myList.remove(15)
# print("세번째 결과 : %s" % myList)
#* (2) 다음 프로그램 결과를 작성하시오
# myList = [5, 10, 12, 15]
# del(myList[2])
# print("첫번째 결과 : %s" % myList)
# myList.append(9)
# print("두번째 결과 : %s" % myList)
# myList.sort()
# print("세번째 결과 : %s" % myList)
# myList.remove(15)
# print("네번째 결과 : %s" % myList)
# myList.insert(1,8)
# print("최종 결과 : %s" % myList)
#* (3) 다음 프로그램 결과를 작성하시오
# str = 'test programming. Python test 출력 내용'
# print("첫번째 결과 : %s" % str.title())
# print("두번째 결과 : %s" % str.upper())
# print(str.find('pro'), str.startswith('pro'), str.count('test'))
# strl = ' test- pro- gramming '
# print(strl.strip())
# print(strl.replace('pro', 'general'))
# print(strl.split('-'))
# print(strl.center(40, '*'))
#* (4) 다음 프로그램 결과를 작성하시오
# myList = (5, 15, 3, 20)
# test = list(myList)
# test.append(8)
# print("첫번째 결과 : %s" % test)
# mydic = {'성별':'남', '학번':'2021014214', '학교':'원광대학교'}
# print("두번째 결과 : %s" % mydic)
# mydic['학번']='2021145014'
# mydic['전화번호']='063-850-5454'
# print("세번째 결과 : %s" % mydic)
# del(mydic['학교'])
# print("네번째 결과 : %s" % mydic)
# print("다섯번째 결과 : %s" % mydic.get('학번'))
# print("여섯번째 결과 : %s" % list(mydic.keys()))
#* (5) 다음 프로그램 결과를 작성하시오
# test1 = {5, 15, 3, 20}
# test2 = {10, 15, 9, 20, 35}
# print("첫번째 결과 : %s" % test1.intersection(test2))
# temp1 = test1 - test2
# print("두번째 결과 : %s" % temp1)
# temp2 = test1 | test2
# print("세번째 결과 : %s" % temp2)
# list1 = [1, 2, 3, 4]
# list2 = list1
# list2[1] = 15
# print("네번째 결과 : %s"  % list2)
#* (6) 다음 프로그램 결과를 작성하시오
# def func1() :
#     global a
#     b = 7
#     b = a + 10
#     b = a + b
#     print("첫번째 함수결과 %d %d" % (a, b))
# def func2():
#     a = 5
#     b = a * 5
#     print("두번째 함수결과 %d %d" % (a, b))
# a = 10
# b = 15
# func1()
# func2()    
#* (7) 다음 프로그램 결과를 작성하시오
# def testf(*para): #$ 튜플형식으로 전달
#     result = 5
#     for num in para :
#         result = result * num
#     return result
# temp = 1
# temp = testf(5, 3)
# print("첫번째 결과 ==> %d" % temp)
# temp = testf(2, 1, 5)
# print("두번째 결과 ==> %d" % temp)
    
#* (8) 다음 프로그램 결과를 작성하시오
def func1(a, b) :
    result = 10
    result = result - a + b
    return result
temp = 0
temp = func1(100, 50)
def func2(a, b) :
    result = 5
    result = a * b
    return result
print("첫번째 계산 결과 %d" % temp)
temp = func2(2, 15)
print("두번째 계산 결과 %d" % temp)


 
