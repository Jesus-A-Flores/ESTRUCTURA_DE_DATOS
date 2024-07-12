import pyautogui
import time

time.sleep(5)

a = 10
while a >= 1:
    pyautogui.typewrite("City paso!!!")
    pyautogui.press('enter')
    a-=1