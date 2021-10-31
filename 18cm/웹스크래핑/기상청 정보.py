import urllib.request
import urllib.parse
API = "http://www.kma.go.kr/weather/forecast/mid-term-rss3.jsp"
# 매개변수를 URl 인코딩합니다. 
values = {
    'stnId': '108'
}
params = urllib.parse.urlencode(values)
# 요청 전용 Url을 생성합니다.
url = API + "?" + params
print("url=", url)
# 다운로드 합니다.
data = urllib.request.urlopen(url).read()
text =data.decode("utf-8")
print(text)