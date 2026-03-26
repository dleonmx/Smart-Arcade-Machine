import requests 
import keyboard
import time 
from datetime import datetime
from datetime import timedelta
import psutil 
import threading
url ="http://127.0.0.1:5000/incrementar"

data= {"valor":0,
       "ti":0,
       "cpu":0,
       "EN":0,
        "RAM":0
       }
def monitoreo():
    while True:
        data['EN']= str(timedelta(seconds=int(time.time() - psutil.boot_time())))
        data['cpu']=str(psutil.cpu_percent(interval=0))+ '%'
        data['RAM'] = str(round(psutil.virtual_memory().total / (1024**3), 2)) + '%'
        requests.post(url,json=data)
        time.sleep(2)
  
sensor_thread = threading.Thread(target=monitoreo, daemon=True)
sensor_thread.start()
while True:
    event = keyboard.read_event()  
    if event.event_type == keyboard.KEY_DOWN and event.name == "s":
        data['valor']=data['valor']+2
        data['ti']=hora = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        respuesta=requests.post(url,json=data)



