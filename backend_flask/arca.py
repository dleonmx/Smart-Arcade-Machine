from flask import Flask, render_template,jsonify
from flask import request 
import requests
app= Flask(__name__)
numero=0
cpu=0
EN=0
ti=0
RAM=0
@app.route('/')
def dashboard():    
    return render_template('dashboard.html')
@app.route('/incrementar', methods= ['POST'])
def incrementar():
    global numero
    global cpu
    global EN
    global ti
    global RAM
    data= request.get_json()
    if data and 'valor' in data:
        numero =data['valor']
    if data and 'cpu' in data:
        cpu =data['cpu']
    if data and 'EN' in data:
        EN = data['EN']
    if data and 'ti' in data:
        ti = data['ti']
    if data and 'RAM' in data:
        RAM= data['RAM']  
    return '',204
@app.route('/numero', methods=['GET'])
def obtener_numero():
    return jsonify({"numero": numero,
                    "cpu":cpu,
                    "EN":EN,
                    "ti":ti,
                    "RAM":RAM
                    })
if __name__=="__main__":
    app.run(debug=True)
