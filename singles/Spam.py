import pyautogui 
import time
n=0
time.sleep(5)
f = open('text.txt', 'r')
while n < 100:
    n += 1
    for word in f:
        time.sleep(0.3)
        pyautogui.typewrite(word)
        pyautogui.press("enter") 