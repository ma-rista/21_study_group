from flask import Flask, request
app = Flask(__name__)

@app.route('/get_logs', methods=['POST'])
def get_logs():
    logs = request.form['logs']
    
    with open('logs.txt', 'a') as f:
        f.wrie(f'{logs}\n')
        
    return {'result': True}

if __name__ == '__main__':
    app.run(host='0.0.0.0')