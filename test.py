# -*- coding: utf-8 -*-
"""
Created on Fri Feb  5 18:22:27 2021

@author: Przemek
"""

	
import requests

#from PIL import Image
import time

## Pobieranie pliku
r = requests.get('https://i.ibb.co/XWcGzJN/EhEPOBb.jpg', stream=True)

with open('fotka.png', 'wb') as f:
    for chunk in r.iter_content(chunk_size=1024):
        if not chunk:
            break
        
        f.write(chunk)
        
        
##        
time.sleep(1.5)
##im = Image.open("C:/Users/Public/BadUSB-ChangeWallpaper/fotka.png")
##im.show()
##time.sleep(1)
