import time
from selenium.webdriver.support.ui import WebDriverWait
from selenium import webdriver
import os

os.environ['PATH'] += r'.\chromedriver.chromedriver.exe'
driver = webdriver.Chrome()

driver.get('https://www.nseindia.com/option-chain?symbol=NIFTY&instrument=-&date=-')

