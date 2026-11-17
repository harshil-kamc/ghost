from flask import Flask
app=Flask(__name__)
@app.route('/')
def helloWorld():
    return "<h3>Hello World.You Executed Flask</h3><a href='/page1'>Goto Page 1</a>"
@app.route('/page1')
def display1():
    return "<h3>This is Page 1 Display</h3><a href='/page2'>Goto Page 2</a>"
@app.route('/page2')
def display2():
    return "<h3>This is Page 2 Display</h3><a href='/'>Goto Main</a>"
if __name__=='__main__':
    app.run()