import requests
from bs4 import BeautifulSoup

indeed_result = requests.get("https://kr.indeed.com/jobs?q=python&l&vjk=c25feb431668b850")


 
indeed_soup = BeautifulSoup(indeed_result.text, "html.parser")

pagination = indeed_soup.find("div", {"class": "pagination"})

pages = pagination.find_all('a')
spans = []
for page in pages:
    spans.append(page.find("span"))  
print(spans[0:-1])

